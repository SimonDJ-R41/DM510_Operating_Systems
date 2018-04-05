#include <stdio.h>

int stupid();

int main(int argc, char** argv)
{
  stupid();
  stupid();
  return 0; 
}

int stupid()
{
  static int i=17;
  printf("i is %d\n", i);
  i++;
  int j;
}
