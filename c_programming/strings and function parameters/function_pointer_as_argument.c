#include <stdio.h>
#include <stdlib.h>

int compare(const void*, const void*);

int main()
{
    int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;

    num = sizeof(arr)/sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void*)arr, num, width, compare);

    for(i = 0; i < 5; i++)
        printf("%d", arr[i]);

    return 0;
}

int compare(const void* elem1, const void* elem2){
    if((*(int*)elem1) == (*(int*)elem2))
        return -1;
    else
        return 1;
}
