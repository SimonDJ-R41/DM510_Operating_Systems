#include <stdio.h>
main()
{
  int x = 5;
  int y = (x++) * (x++) * (x++);
  printf("Value: %i\n", y);
  return 0;
}
