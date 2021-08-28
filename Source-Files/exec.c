#include <windows.h>
#include "beacon.h"

DECLSPEC_IMPORT UINT WINAPI Kernel32$WinExec(LPCSTR, UINT);

void go(char * args, int alen) {
      BeaconPrintf(CALLBACK_OUTPUT, "Executing: %s", args);
      Kernel32$WinExec(args, SW_SHOW);
}
