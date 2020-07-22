#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i1 = 10;
   int i2 = 3;
   int questiont, remainder;
   float f1 = 4.2;
   float f2 = 2.5;
   float result;

   questiont = i1/i2; //3
   remainder = i1%i2; //1
   result = f1/f2; //1.68

   printf("questiont: %d \n", questiont);
   printf("remainder: %d \n", remainder);
   printf("result: %f \n", result);

    return 0;
}
