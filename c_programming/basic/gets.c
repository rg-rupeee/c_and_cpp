#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];

    gets(a);

    printf("you entered : %s", a);

    return 0;
}
