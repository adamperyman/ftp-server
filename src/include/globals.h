SOCKET s = 0;
SOCKET ns = 0;
SOCKET ns_data = 0;
SOCKET s_data_act = 0;

char send_buffer[200] = { '\0' };
char receive_buffer[200] = { '\0' };

int active = 0;
int n = 0;
int bytes = 0;
int addrlen = 0;

struct sockaddr_storage localaddr = {};
struct sockaddr_storage remoteaddr = {};
