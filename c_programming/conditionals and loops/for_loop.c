#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int max = 10;

    for(i = 0; i < max ; i++){
        printf("%d \n", i);
    }

    int r;

    for(r = 0 ; r < max; r++){
        printf("%d \n", r);
    }

    int y;
    for(r = 0, y = max; r < y; r++, y--){
        printf("count = %d \n", y);
    }


    return 0;
}
