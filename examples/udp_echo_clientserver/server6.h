#ifndef _SERVER6_H
#define _SERVER6_H

#include "feal.h"
#include "server.h"

class Server6 : public Server
{

public:

Server6() = default;
~Server6() = default;


protected:

void start_listening(void);

};

#endif // _SERVER6_H