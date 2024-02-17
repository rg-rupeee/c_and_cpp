#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}point;

typedef struct{
    float radius;
    point center;
}circle;

int main()
{
    point p;
    p.x = 3;
    p.y = 4;

    circle c;
    c.radius = 3.14;
    c.center = p;

    printf("circle radius is %3.2f, center is at (%d, %d)", c.center, c.center.x, c.center.y);

   circle q = {4.5, {1,3}};
   printf("\n circle q: %3.2f %d %d", q.radius, q.center.x, q.center.y);


    return 0;
}
