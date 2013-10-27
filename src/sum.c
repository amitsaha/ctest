/* Calculate the sum of numbers 
*/

#include <stdlib.h>
#include "sum.h"

float sum(int num, char **numbers)
{
  int loop;
  float s = 0.0;

  if(num == 0 || numbers == NULL)
    return 0.0;
  
  for(loop = 0; loop < num; loop++)
    s = s + strtof(numbers[loop], NULL);

  return s;
}
