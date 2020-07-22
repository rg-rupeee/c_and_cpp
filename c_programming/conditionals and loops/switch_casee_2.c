#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 3;

    switch(num){
       case 1:
       case 2:
       case 3:
       case 4:
        printf("ONE, TWO, THREE, or FOUR. \n");
        break;
       case 5:
       case 6:
         printf("FIVE or SIX");
       default:
          printf("greater than SIX");

    }


    return 0;
}
