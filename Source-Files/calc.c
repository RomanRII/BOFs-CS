include <windows.h>
#include "beacon.h"


/* DECLSPEC_IMPORT WINAPI-OUTPUT WINAPI DLL$FUNCTION(INPUT TYPES); */
DECLSPEC_IMPORT UINT WINAPI Kernel32$WinExec(LPCSTR, UINT);

void go(char * args, int alen) {
      BeaconPrintf(CALLBACK_OUTPUT, "Opening calc.exe");
      Kernel32$WinExec("calc.exe", SW_SHOW);
}
