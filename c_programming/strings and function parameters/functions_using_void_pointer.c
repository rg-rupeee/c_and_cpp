#include <stdio.h>
#include <stdlib.h>

void *square(const void *num);

int main()
{
    int x, sq_int;
    x = 6;
    sq_int = square(&x);
    printf("%d squared is %d \n", x, sq_int);

    return 0;
}

void *square(const void *num){
    int result;
    result = (*(int*)num) *(*(int*)num);
    return(result);
}
