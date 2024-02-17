#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j = 63;
    int *p = NULL;
    p = &j;

    printf("The address of j is %x \n", &j);
    printf("p cointains the address %x \n", p);
    printf("The value of j is %d \n", j);
    printf("p is pointing to the value %d \n", *p);

    return 0;
}
