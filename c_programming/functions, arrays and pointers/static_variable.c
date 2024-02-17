#include <stdio.h>
#include <stdlib.h>

void say_hello();

int main(){

    int i;

    for(i = 0; i < 5; i++){
        say_hello();
    }

    return 0;
}


void say_hello(){
    static int num_call = 1;
    printf("Hello number %d \n", num_call);
    num_call++;
}
