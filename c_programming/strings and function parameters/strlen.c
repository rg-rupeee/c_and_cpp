#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[] = "The grey fox  ";
    char s2[] = "jumped";

    strcat(s1, s2);
    printf("%s \n", s1);
    printf("length of s1 is %d \n", strlen(s1));
    strcpy(s1,  s2);
    printf("s1 is now %s \n", s1);

    return 0;
}
