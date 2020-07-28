#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char first_name[25];
    int age[10];
    printf("Enter your first name and age: \n");
    scanf("%s %d", first_name, &age);

    printf("\n Hi, %s. Your age is %d", first_name, age);

    return 0;
}
