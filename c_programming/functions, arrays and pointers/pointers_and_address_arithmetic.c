#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;

    ptr = a; // point to the first array element a[0]

    printf("%d %x \n", *ptr, ptr);
    ptr++; // a[1]
    printf("%d %x \n", *ptr, ptr);
    ptr += 3; // a[5]
    printf("%d %x \n", *ptr, ptr);
    ptr--; // a[4]
    printf("%d %x \n", *ptr, ptr);
    ptr -= 2; //a[1]
    printf("%d %x", *ptr, ptr);

    return 0;
}
