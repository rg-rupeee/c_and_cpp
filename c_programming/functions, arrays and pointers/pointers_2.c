#include <stdio.h>
#include <stdlib.h>

void test(int *x){
*x += *x/2;
}

int main()
{
    int v = 8;
    test(&v);
    printf("%d", v);
    /* output: 12 */

    return 0;
}
