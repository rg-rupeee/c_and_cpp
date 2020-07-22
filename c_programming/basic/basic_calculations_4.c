#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price = 6.5;
    int increase = 2;
    float new_price;

    new_price = price + increase;

    printf("new price is %4.2f", new_price);
    /* Output: New price is 8.5.*/

    return 0;
}
