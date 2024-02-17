#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int y;
    int *p = &x;

    y = *p+2;
    y += *p;
    *p = y;
    (*p)++;

    printf("%d", *p);

    return 0;
}



