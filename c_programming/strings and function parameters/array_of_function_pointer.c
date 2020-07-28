#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int nnum2);
int divide(int num1, int num2);;

int main()
{
    int x, y, choice, result;

    int(*op[4])(int, int);

    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;

    printf("Enter two numbers: \n");
    scanf("%d %d", &x, &y);

    printf("Enter 0 to add, 1 to subtract, 2 to multiply, 3 to divide. \n");

    scanf("%d", &choice);

    result = op[choice](x, y);
    printf("\n %d", result);

    return 0;
}

int add(int x, int y){
    return(x+y);
}

int subtract(int x, int y){
    return(x-y);
}

int multiply(int x, int y){
    return(x*y);
}

int divide(int x, int y){
    return(x/y);
}
