#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num = 3;

   switch(num){
     case 1:
       printf("ONE \n");
       break;
     case 2:
        printf("Two \n");
        break;
     case 3:
        printf("THREE \n");
        break;
     default:
        printf("NOT 1,2, or 3. \n");
   }

      return 0;
}
