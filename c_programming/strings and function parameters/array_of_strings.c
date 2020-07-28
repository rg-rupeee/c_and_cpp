#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *trip[] = {
        "suitcase",
        "passport",
        "ticket"
    };

    printf("please briing the following: \n");

    for(int i = 0; i < 3; i++){
        printf("%s \n", trip[i]);
    };


    return 0;
}
