#include <stdio.h>
#include <stdlib.h>

int main()
{
   char city[40];
   printf("Enter your city:");
   gets(city);
   fputs(city, stdout);
   printf(" is a fun city");

   return 0;
}
