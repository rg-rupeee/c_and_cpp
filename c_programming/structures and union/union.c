#include <stdio.h>
#include <stdlib.h>

union val{
    int int_num;
    float fl_num;
    char str[20];
};

int main()
{
    union val test;
    union val t2;
    test.int_num = 42;
    printf("%d", test.int_num);

    t2 = test;
    printf("\n%d", t2.int_num);

    return 0;
}
