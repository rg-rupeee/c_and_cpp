#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;
  float num;
  char text[100];
  scanf("%d %f %S", &x, &num, &text);

  printf("%d %f %s", &x, &num, &text);

  return 0;

}
