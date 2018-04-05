#include <stdio.h>
#include <inttypes.h>

int g=42;

float power(float x, uint32_t exp)
{
  static j = 0;
  j = j + 1;
  /* base case */
  if (exp == 0) {
    return 1.0;
  }
  /* recursive case */
  return x*power(x, exp - 1);
}

int main(int argc, char **argv)
{
  int *ptr = (int *) malloc(3 * sizeof (int));
  int ptr2[] = {1,2,3};

  ptr[2]=17;
  ptr2[2]=19;

  float p;
  p = power(10.0, 2);
  printf("p = %f\n", p);
  g=g+1;
  return 0;
}
