#include <stdio.h>
#include <stdlib.h>

void say_hello(int num_times); /*function*/

int main()
{
    void(*funptr)(int); /*function pointer*/
    funptr = say_hello; /*pointer assignment*/
    funptr(3); /*function call*/

    return 0;
}

void say_hello(int num_times){
    int k;
    for(k = 0; k < num_times; k++)
        printf("hello \n");
}
