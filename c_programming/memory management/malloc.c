#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int arr[10];
    int *ptr;

    printf(" %d \n %d", sizeof(x), sizeof(arr));

    ptr = malloc(10*sizeof(*ptr));

    if(ptr != NULL)
    {
        *(ptr+3) = 50;
    }

    printf("\n 3rd element equals to %d", *(ptr+3));

    free(ptr);

    return 0;
}
