#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    z = 3;
    x = z--;

    y  = 3;
    x = ++y;

    printf("x = %d \n", x);
    printf("y = %d \n", y);;

    return 0;
}
