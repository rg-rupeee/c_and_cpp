#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];

    gets(a);

    printf("You entered :");
    puts(a);

    return 0;
}
