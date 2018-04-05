#include <stdio.h>
#include <inttypes.h>

struct mystruct {
  
  uint16_t x;
  uint32_t y;
} __attribute__ ((__packed__));

int main(int argc, char** argv)
{
  struct mystruct a;
  printf("Value: %d\n",sizeof(a));
  return 0; 
}
