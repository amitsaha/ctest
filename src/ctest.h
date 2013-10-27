# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define EPSILON 1e-5
# define STDOUT_FILE "/tmp/stdout.mock"


/* Macros*/

# define testAlmostEquals(name, expected, actual)	\
  if(fabs(expected - actual) > EPSILON)			\
    printf("FAIL: %s\n", name);				\
  else							\
    printf("PASS: %s\n", name);				\

# define testEquals(name, expected, actual)	\
  if(actual == expected)			\
    printf("PASS: %s\n", name);			\
  else						\
    printf("FAIL: %s\n", name);			\

# define testEqualStrings(name, expected, actual)	\
  if(strcmp(expected, actual) == 0)			\
    printf("PASS: %s\n", name);				\
  else							\
    printf("FAIL: %s\n", name);				\

# define testStdout(name, expected, length)				\
  char *actual;								\
  actual = malloc(length);\
  FILE *f = fopen(STDOUT_FILE, "r");					\
  fgets(actual, length, f);						\
  if(strcmp(expected, actual) == 0)					\
    printf("PASS: %s\n", name);						\
  else									\
    printf("FAIL: %s\n Length: %d Expected: %s Actual: %s", name, length, expected, actual); \
  fclose(f);								\
  

/* Prototypes*/
FILE *patched_stdout;
void patchstdout();
void restorestdout();

