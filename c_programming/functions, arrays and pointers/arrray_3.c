#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[10];
    int k;

    for(k = 0; k < 10; k++){
        a[k] = k*10;
    }

    for(k = 0; k < 10; k++){
        printf("%d \n", a[k]);
    }

    return 0;

}





