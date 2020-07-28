#include <stdio.h>
#include <stdlib.h>

int add_up(int *a, int num_elements);

int main()
{
    int orders[5] = {100, 220, 37, 16, 98};

    printf("Total orders is %d \n", add_up(orders, 5));

    return 0;
}

// OUTPUT: Total order is 471

int add_up(int *a, int num_elements){
    int total = 0;
    int k;

    for(k = 0; k < num_elements; k++){
        total += a[k];
    }

    return(total);
}
