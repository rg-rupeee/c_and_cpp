#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    int x = 3;

    y = (x >= 5) ? 5 : x;

    printf("%d", y);

    return 0;
}
