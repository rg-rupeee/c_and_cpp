#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score = 89;

    if(score >= 90)
         printf("%s,Top 10%%. \n", score);
    else if(score >= 80)
        printf("%s,Top 20%%. \n", score);
    else if(score >= 70)
        printf("%s, You passed. \n", score);
    else
        printf("YOU FAILED");

    return 0;
}
