# include <stdio.h>
# include "sum.h"

int main(int argc, char **argv, char **argp)
{
  int i;
  if(argc>1)
    {
      char *numbers[argc-1];
      for(i=1;i<argc;i++)
	numbers[i] = argv[i];
      printf("Sum: %f\n", sum(argc, numbers));
    }
  return 0;
}
