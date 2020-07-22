#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 42;
    if(n > 0 && n <= 100)
        printf("Range(1-100). \n");

    char y = 'X';
    if(y == 'x' || y == 'X')
            printf("Roman numeral 10. \n");

    int z = 42;
    if(z ==999 ||(z > 0 && z <= 100))
        printf("Inpput valid. \n");

    char q = 'g';
    if(!(q == 'x'  ||  q == 'X'))
        printf("q is not 10. \n");

    return 0;
}
