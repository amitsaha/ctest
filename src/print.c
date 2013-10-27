# include <stdio.h>
# include "print.h"

void print(char *data)
{
  printf("%s", data);
  fflush(stdout);
}

