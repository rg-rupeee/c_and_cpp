#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[10];
    int num;

    printf("Enter a number:");
    gets(input);
    num = atoi(input);

    printf("You entered %d", num);

    return 0;
}
