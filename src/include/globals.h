#ifdef _WIN32
#include <Winsock2.h>
#endif

#include <ws2tcpip.h>
#include "macros.h"

SOCKET s                                = 0;
SOCKET ns                               = 0;
SOCKET ns_data                          = 0;
SOCKET s_data_act                       = 0;

char send_buffer[BUFF_SIZE]             = { '\0' };
char receive_buffer[BUFF_SIZE]          = { '\0' };
char portNum[NI_MAXSERV]                = { '\0' };
char clientHost[NI_MAXHOST]             = { '\0' };
char clientService[NI_MAXSERV]          = { '\0' };

int active                              = 0;
int n                                   = 0;
int bytes                               = 0;
int addrlen                             = 0;
int iResult                             = 0;

struct sockaddr_storage localaddr       = {};
struct sockaddr_storage remoteaddr      = {};
struct addrinfo hints                   = {};
struct addrinfo* result                 = NULL;
struct addrinfo* ipv4                   = NULL;
struct addrinfo* ipv6                   = NULL;
struct addrinfo* pAddrInfo              = result;
