#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str4[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    printf("str3 is %s, str4 is %s", str3, str4);

    return 0;
}
