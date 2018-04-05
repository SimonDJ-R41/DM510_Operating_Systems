#include <stdio.h>
#include <inttypes.h>


float power(float x, uint32_t exp)
{
  /* base case */
  if (exp == 0) {
    return 1.0;
  }
  /* recursive case */
  return x*power(x, exp - 1);
}

int main(int argc, char **argv)
{
  float p;
  p = power(10.0, 2);
  printf("p = %f\n", p);
  return 0;
}
