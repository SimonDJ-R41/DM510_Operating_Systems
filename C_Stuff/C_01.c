#include <stdio.h>

void change(int *p) {
    *p = 42;
}

int main(void) {

    int i = 2;
    change(&i);

    printf("i: %i\n", i);

    


    return 0;
}
