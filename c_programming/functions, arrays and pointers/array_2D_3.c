#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][3] = {
        {3, 2, 6},
        {4, 5, 20}
    };

    int sum = 0;

    for(int k = 0; k < 2; k++){
        for(int j = 0; j < 3; j++){
            sum = sum + a[k][j];
        }
    }

    printf("sum: %d", sum);

    return 0;
}
