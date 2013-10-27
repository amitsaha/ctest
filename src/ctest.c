# include <stdio.h>
# include "ctest.h"

void patchstdout()
{
  patched_stdout = freopen(STDOUT_FILE, "w+", stdout);
  
  if(patched_stdout == NULL)
      perror("freopen");

}     

void restorestdout()
{
  /* flush and close patched stdout*/
  fflush(patched_stdout);
  fclose(patched_stdout);

  /* XXX is there a better way to do this?*/
  freopen("/dev/tty", "a", stdout);
}
