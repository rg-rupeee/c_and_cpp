#include <stdio.h>

int main() {
 printf("hello world! \n");

 printf("int: %d \n", sizeof(int));
 printf("float: %d \n", sizeof(float));
 printf("double: %d \n", sizeof(double));
 printf("char: %d \n", sizeof (char));

 int a,b;
 float salary = 4.5;
 char code = 'B';
 a = 450000;
 b = 50000;
 int c = a+b;
 printf("total salary: %d \n", c);
 printf("basic salary: %f \n", salary);
 printf("designation: %c \n", code);


 return 0;

}
