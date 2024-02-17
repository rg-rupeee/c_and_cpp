#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;

    ptr = &x;
    printf("void ptr points to %d \n", *((int*)ptr));

    ptr = &y;
    printf("void ptr points to %f \n", *((float*)ptr));

    ptr = &c;
    printf("void pointer points to %c \n", *((char*)ptr));

    return 0;
}
