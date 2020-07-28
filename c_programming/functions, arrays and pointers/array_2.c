#include <stdio.h>
#include <stdlib.h>

int main(){

    float purchase[3] = {10.99, 14.25, 90.50};
    float total = 0;
    int k;

    /* total the purchase */
    for(k = 0; k < 3; k++){
        total+= purchase[k];
    }

    printf("purchase total is %6.2f \n", total);
    /* output: purchase total is 115.74 */



    return 0;

}
