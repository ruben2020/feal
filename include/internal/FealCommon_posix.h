#ifndef _FEAL_COMMON_POSIX_H
#define _FEAL_COMMON_POSIX_H

#ifndef _FEAL_H
#error "Please include feal.h and not the other internal Feal header files, to avoid include errors."
#endif

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define SOCK_STARTUP()

#define SOCK_CLEANUP()

namespace feal
{
    
typedef enum
{
    FEAL_OK = 0,
    FEAL_E2BIG = E2BIG,
    FEAL_EACCES = EACCES,
    FEAL_EADDRINUSE = EADDRINUSE,
    FEAL_EADDRNOTAVAIL = EADDRNOTAVAIL,
    FEAL_EAFNOSUPPORT = EAFNOSUPPORT,
    FEAL_EAGAIN = EAGAIN,
    FEAL_EALREADY = EALREADY,
    FEAL_EBUSY = EBUSY,
    FEAL_ECANCELED = ECANCELED,
    FEAL_ECHILD = ECHILD,
    FEAL_ECONNABORTED = ECONNABORTED,
    FEAL_ECONNREFUSED = ECONNREFUSED,
    FEAL_ECONNRESET = ECONNRESET,
    FEAL_EDEADLK = EDEADLK,
    FEAL_EDESTADDRREQ = EDESTADDRREQ,
    FEAL_EDOM = EDOM,
    FEAL_EDQUOT = EDQUOT,
    FEAL_EEXIST = EEXIST,
    FEAL_EFAULT = EFAULT,
    FEAL_EFBIG = EFBIG,
    FEAL_EHOSTDOWN = EHOSTDOWN,
    FEAL_EHOSTUNREACH = EHOSTUNREACH,
    FEAL_EIDRM = EIDRM,
    FEAL_EILSEQ = EILSEQ,
    FEAL_EINPROGRESS = EINPROGRESS,
    FEAL_EINTR = EINTR,
    FEAL_EINVAL = EINVAL,
    FEAL_EIO = EIO,
    FEAL_EISCONN = EISCONN,
    FEAL_EISDIR = EISDIR,
    FEAL_ELOOP = ELOOP,
    FEAL_EMFILE = EMFILE,
    FEAL_EMLINK = EMLINK,
    FEAL_EMSGSIZE = EMSGSIZE,
    FEAL_EMULTIHOP = EMULTIHOP,
    FEAL_ENAMETOOLONG = ENAMETOOLONG,
    FEAL_ENETDOWN = ENETDOWN,
    FEAL_ENETRESET = ENETRESET,
    FEAL_ENETUNREACH = ENETUNREACH,
    FEAL_ENFILE = ENFILE,
    FEAL_ENOBUFS = ENOBUFS,
    FEAL_ENODATA = ENODATA,
    FEAL_ENODEV = ENODEV,
    FEAL_ENOENT = ENOENT,
    FEAL_ENOEXEC = ENOEXEC,
    FEAL_ENOLCK = ENOLCK,
    FEAL_ENOLINK = ENOLINK,
    FEAL_ENOMEM = ENOMEM,
    FEAL_ENOMSG = ENOMSG,
    FEAL_ENOPROTOOPT = ENOPROTOOPT,
    FEAL_ENOSPC = ENOSPC,
    FEAL_ENOSR = ENOSR,
    FEAL_ENOSTR = ENOSTR,
    FEAL_ENOSYS = ENOSYS,
    FEAL_ENOTBLK = ENOTBLK,
    FEAL_ENOTCONN = ENOTCONN,
    FEAL_ENOTDIR = ENOTDIR,
    FEAL_ENOTEMPTY = ENOTEMPTY,
    FEAL_ENOTRECOVERABLE = ENOTRECOVERABLE,
    FEAL_ENOTSOCK = ENOTSOCK,
    FEAL_ENOTSUP = ENOTSUP,
    FEAL_ENOTTY = ENOTTY,
    FEAL_ENXIO = ENXIO,
    FEAL_EOPNOTSUPP = EOPNOTSUPP,
    FEAL_EOVERFLOW = EOVERFLOW,
    FEAL_EOWNERDEAD = EOWNERDEAD,
    FEAL_EPERM = EPERM,
    FEAL_EPFNOSUPPORT = EPFNOSUPPORT,
    FEAL_EPIPE = EPIPE,
    FEAL_EPROTO = EPROTO,
    FEAL_EPROTONOSUPPORT = EPROTONOSUPPORT,
    FEAL_EPROTOTYPE = EPROTOTYPE,
    FEAL_ERANGE = ERANGE,
    FEAL_EREMOTE = EREMOTE,
    FEAL_EROFS = EROFS,
    FEAL_ESHUTDOWN = ESHUTDOWN,
    FEAL_ESPIPE = ESPIPE,
    FEAL_ESOCKTNOSUPPORT = ESOCKTNOSUPPORT,
    FEAL_ESRCH = ESRCH,
    FEAL_ESTALE = ESTALE,
    FEAL_ETIME = ETIME,
    FEAL_ETIMEDOUT = ETIMEDOUT,
    FEAL_ETOOMANYREFS = ETOOMANYREFS,
    FEAL_ETXTBSY = ETXTBSY,
    FEAL_EUSERS = EUSERS,
    FEAL_EWOULDBLOCK = EWOULDBLOCK,
    FEAL_EXDEV = EXDEV

#if defined (__linux__)
    ,
    FEAL_EBADE = EBADE,
    FEAL_EBADF = EBADF,
    FEAL_EBADFD = EBADFD,
    FEAL_EBADMSG = EBADMSG,
    FEAL_EBADR = EBADR,
    FEAL_EBADRQC = EBADRQC,
    FEAL_EBADSLT = EBADSLT,
    FEAL_ECHRNG = ECHRNG,
    FEAL_ECOMM = ECOMM,
    FEAL_EDEADLOCK = EDEADLOCK,
    FEAL_EHWPOISON = EHWPOISON,
    FEAL_EISNAM = EISNAM,
    FEAL_EKEYEXPIRED = EKEYEXPIRED,
    FEAL_EKEYREJECTED = EKEYREJECTED,
    FEAL_EKEYREVOKED = EKEYREVOKED,
    FEAL_EL2HLT = EL2HLT,
    FEAL_EL2NSYNC = EL2NSYNC,
    FEAL_EL3HLT = EL3HLT,
    FEAL_EL3RST = EL3RST,
    FEAL_ELIBACC = ELIBACC,
    FEAL_ELIBBAD = ELIBBAD,
    FEAL_ELIBMAX = ELIBMAX,
    FEAL_ELIBSCN = ELIBSCN,
    FEAL_ELIBEXEC = ELIBEXEC,
    FEAL_ENOMEDIUM = ENOMEDIUM,
    FEAL_ENOANO = ENOANO,
    FEAL_ENOKEY = ENOKEY,
    FEAL_EMEDIUMTYPE = EMEDIUMTYPE,
    FEAL_ENONET = ENONET,
    FEAL_ENOPKG = ENOPKG,
    FEAL_ENOTUNIQ = ENOTUNIQ,
    FEAL_EREMCHG = EREMCHG,
    FEAL_EREMOTEIO = EREMOTEIO,
    FEAL_ERESTART = ERESTART,
    FEAL_ERFKILL = ERFKILL,
    FEAL_ESTRPIPE = ESTRPIPE,
    FEAL_EUCLEAN = EUCLEAN,
    FEAL_EUNATCH = EUNATCH,
    FEAL_EXFULL = EXFULL
#endif

} errenum;


typedef int socket_t;

typedef union sockaddr_ip {
    struct sockaddr sa;
    struct sockaddr_in in;
    struct sockaddr_in6 in6;
} sockaddr_ip;


    typedef uint32_t EventId_t;
    typedef uint32_t ActorId_t;
    typedef enum {INET=AF_INET, INET6=AF_INET6, UNIX=AF_UNIX} family_t;

    typedef struct {
        enum {INET=AF_INET, INET6=AF_INET6} family;
        uint16_t port;
        char addr[INET6_ADDRSTRLEN];
    } ipaddr;

void ipaddr_posix2feal(sockaddr_ip* su, ipaddr* fa);
int  ipaddr_feal2posix(ipaddr* fa, sockaddr_ip* su);
int  setnonblocking(socket_t fd);
int  setipv6only(socket_t fd);
int  datareadavaillen(socket_t fd);

}

#endif // _FEAL_COMMON_POSIX_H
