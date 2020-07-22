#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 8;
    int y = 7;
    x++;
    x += y--;

    printf("%d \n", x);

    printf("%d",y);
    return 0;
}
