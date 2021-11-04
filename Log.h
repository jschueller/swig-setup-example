#include "stdlib.h"

void Log_Warn(char* msg)
{
  fprintf(stderr, "WRN - %s\n", msg);
}
