#include <stdio.h>
#include <stdlib.h>

union type
{
    int i_val;
    float f_val;
    char ch_val;
};

int main()
{
    union type arr[3];
    arr[0].i_val = 42;
    arr[1].f_val = 3.14;
    arr[2].ch_val = 'x';

    printf("%d\n%f\n%c\n", arr[0].i_val, arr[1].f_val, arr[2].ch_val);

    return 0;
}
