# include "sum.h"
# include "ctest.h"
# include <stdlib.h>

void test_sum_float()
{
  char *numbers[3];
  numbers[0] = "1.1";
  numbers[1] = "2.3";
  numbers[2] = "4.3";
  float expected = 7.7;
  
  testAlmostEquals("test_sum_float", expected, sum(3, numbers));
}

void test_sum_int()
{
  char *numbers[3];
  numbers[0] = "1";
  numbers[1] = "2";
  numbers[2] = "4";
  float expected = 7;
  
  testAlmostEquals("test_sum_int", expected, sum(3, numbers));
}

void test_sum_none()
{
  float expected = 0;
  testAlmostEquals("test_sum_none", expected, sum(0, NULL));
  testAlmostEquals("test_sum_none", expected, sum(10, NULL));
}

int main()
{
  test_sum_float();
  test_sum_int();
  test_sum_none();

  return 0;
}
