#include <stdio.h>
#include <stdlib.h>

int main()
{
      int i, j;
      int table = 20;
      int max = 10;

      for(i =1; i <= table; i++){
        for(j = 1; j <= max; j++){
            printf("%d x %d = %d \n", i, j, i*j);
        }
      printf("\n");
      }

            return 0;
}
