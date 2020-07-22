#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y;
  char text[20];
  scanf("%2d %d %*f %5s", &x, &y, &text);
  /*input: 12345 507 asdfghjk */

   printf("%d %d %s", x, y, text);
   /*output: 12 507 asdfg*/

    return 0;
}
