#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str20[20];
    char *str = NULL;

    printf("  %d \n ", sizeof(char));

    strcpy(str20, "12345");
    printf("str20 size: %d \n", sizeof(str20));
    printf("str20 length: %d \n", strlen(str20));

    str = malloc(strlen(str20)+1);
    strcpy(str, str20);
    printf("%s", str);

    return 0;
}
