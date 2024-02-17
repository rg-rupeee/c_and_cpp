#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  city[40];
    printf("Enter your city: ");
    fgets(city, 40, stdin);
    fputs(city, stdout);
    printf("is a wonderful city");

    return 0;
}
