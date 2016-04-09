// To recognise getaddrinfo().
#define _WIN32_WINNT 0x501

// Winsock version definition.
#ifndef WSVERS
#define WSVERS MAKEWORD(2,2)
#endif

// Reduce the size of Win32 header files.
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

// For getting filename from receive buffer.
#ifndef BUFF_SIZE
#define BUFF_SIZE 256
#endif

// Default listening port.
#ifndef DEFAULT_PORT
#define DEFAULT_PORT "1234"
#endif

// Sorry, it's not often I get to use infinite loops.
#ifndef PIGS_FLY
#define PIGS_FLY 0
#endif

// For login.
#ifndef DEFAULT_USER
#define DEFAULT_USER "napoleon"
#endif

#ifndef DEFAULT_PASSWORD
#define DEFAULT_PASSWORD "334"
#endif
