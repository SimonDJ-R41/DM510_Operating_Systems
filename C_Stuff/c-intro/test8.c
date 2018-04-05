#include <stdio.h>

int * get_pointer()
{
	int x=0;
	return &x;
}

int main(int argv, char** argc)
{
   	int * ptr = get_pointer();
	*ptr       = 12;
        printf("now : %d\n", *ptr);
  	int var = 145;
        printf("now : %d\n", *ptr);
}
