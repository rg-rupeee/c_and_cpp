#include <stdio.h>
#include <stdlib.h>

struct student{
    int age;
    int grade;
    char name[40];
};

int main()
{
    struct student s1 = {19, 9, "John"}; // declaration and initialisation

    struct student s2; // declarationn
    s2 = (struct student){22, 10, "Super Sane"}; // initialisation
    // type cast is needed

    struct student s3 = { .grade = 12, .age = 20, .name = "shawn mendis"};

   printf("student %s, %d \n", s1.name, s1.age);
   printf("student %s, %d \n", s2.name, s2.age);
   printf("student %s, %d \n", s3.name, s3.age);

   return 0;
}
