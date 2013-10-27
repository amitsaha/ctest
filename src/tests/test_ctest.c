# include "ctest.h"

void test_equal_strings()
{
  testEqualStrings("test_equal_strings", "Hello World", "Hello World");
}

void test_equal_ints()
{
  testEquals("test_equal_ints", 1, 1);
}

int main(int argc, char **argv)
{  
  test_equal_strings();
  test_equal_ints();
  return 0;
}
