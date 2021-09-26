#include "feal.h"

feal::map_evtsig_t feal::SignalGeneric::mapSignal;
std::mutex feal::SignalGeneric::mtxMapSig;

void feal::SignalGeneric::init(void)
{
    const std::lock_guard<std::mutex> lock(mtxMapSig);
    BaseSignal::recvsig_fp = &sighandler;
}

void feal::SignalGeneric::sighandler(int signum, int sicode)
{
    const std::lock_guard<std::mutex> lock(mtxMapSig);
    auto it = mapSignal.find(signum);
    if (it != mapSignal.end())
    {
        vec_evtsig_ptr_t ves = it->second;
        for (auto itv = ves.begin(); itv != ves.end(); ++itv)
        {
            (*itv).get()->signo = signum;
            (*itv).get()->sicode = sicode;
            EventBus::getInstance().publishEvent(*itv);
        }
    }
}