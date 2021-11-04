#include "stdlib.h"

void Log_Warn(char* msg)
{
	setbuf(stderr, NULL);
  fprintf(stderr, "WRN - %s\n", msg);
}
