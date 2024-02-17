#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}point;

typedef struct{
    float radius;
    point centre;
}circle;

int main()
{
    point p;
    p.x = 3;
    p.y = 4;

    circle c;
    c.radius = 3.14;
    c.centre = p;

    printf("%2f , ( %d , %d)" , c.radius, c.centre.x, c.centre.y);

    return 0;
}
