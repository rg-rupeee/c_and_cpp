#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 12;
    int *p = NULL;
    int **ptr = NULL;

    p = &x;
    ptr = &p;


    printf("p is pointing to the value %d \n", *p);

    printf("ptr is pointing to the value %d \n", **ptr);

    return 0;
}
