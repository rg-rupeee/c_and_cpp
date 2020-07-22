#include <stdio.h>
#include <stdlib.h>

int main()
{
    int profit;
    int client;
    int bonus;


    profit = 5555;
    client = 20;

    if(profit > 1000){
        if(client > 15)
         bonus = 100;
    }else
        bonus = 52;

    printf("%d", bonus);

    return 0;
}
