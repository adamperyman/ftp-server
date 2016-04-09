#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include "macros.h"
#include "globals.h"

void _setupWinsock(void) {
  WSADATA wsadata;

  // Check that Winsock works.
  if (WSAStartup(WSVERS, &wsadata) == INVALID_SOCKET) {
    fprintf(stderr, "Error: WSAStartup failed\n");
    WSACleanup();
    exit(1);
  }

  // Check for Winsock version.
  if (LOBYTE(wsadata.wVersion) != 2 || HIBYTE(wsadata.wVersion) != 2) {
    fprintf(stderr, "Error: Could not find a usable version of Winsock.dll\n");
    WSACleanup();
    exit(1);
  }
}
