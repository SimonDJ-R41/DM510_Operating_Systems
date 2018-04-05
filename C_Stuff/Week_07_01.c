#include <stdio.h>
#include <inttypes.h>
float power(float x, uint32_t exp);
float power(float x, uint32_t exp)  {
  float result;

  /* base case */
  if (exp == 0) return 1.0;
  result = power(x, exp >> 1);
  result = result * result;

  if (exp & 1) result = result * x;
  return result;

}
int main(int argc, char **argv) {
  float p;
  p = power(10.0, 5);
  printf("p = %f\n", p);
  return 0;
}
