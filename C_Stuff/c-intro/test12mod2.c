#include <stdio.h>
#include <inttypes.h>

float power(float x, uint32_t exp);

float power(float x, uint32_t exp)
{
  float result;
  /* base case */
  if (exp == 0)
    return 1.0;
  
  /* x^(2*a) == x^a * x^a */
  result = power(x, exp >> 1);
  result = result * result;
  
  /* x^(2*a+1) == x^(2*a) * x */
  if (exp & 1)
    result = result * x;
  return result;
}

int main(int argc, char **argv)
{
  float p;
  p = power(10.0, 5);
  printf("p = %f\n", p);
  return 0;
}
