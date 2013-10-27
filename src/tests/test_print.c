# include "ctest.h"
# include "print.h"

void test_stdout()
{
  char *msg = "Hello World";

  patchstdout();
  print(msg);
  restorestdout();
  testStdout("test_stdout", msg, strlen(msg)+1);  
}

int main(int argc, char **argv)
{
  
  test_stdout();
  return 0;
}
