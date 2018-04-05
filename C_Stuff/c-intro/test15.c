#include <stdlib.h>

static inline void swap(int *m, int *n)
{
  int * temp = m;
  m = n;
  n = temp;
}

int main(int argc, char **argv)
{
  int * x;
  int * y;

  x = calloc(1,sizeof(int));
  y = calloc(1,sizeof(int));

  *x = 42;
  *y = 100;
  
  swap(x, y);
}
