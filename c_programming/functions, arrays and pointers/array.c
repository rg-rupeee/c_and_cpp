#include <stdio.h>
#include <stdlib.h>

int main(){

    int x[5] = {10, 20, 30, 40, 50};

    printf("The second element of the array is %d \n", x[2]);

    x[2] = 200;

    printf("\nNow, the second element of the array is %d\n\n", x[2]);

    return 0;
}
