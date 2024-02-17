#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int age;
    int grade;
    char name[40];
};

int main()
{
    struct student s1;
    struct student s2;

    s1.age = 19;
    s1.grade = 12;
    sprintf(s1.name, "John Don");

    s2.age = 21;
    s2.grade = 10;
    sprintf(s2.name, "Batman Jokerson");

    printf("student: %s, age: %d, grade: %d \n", s1.name, s1.age, s1.grade);
    printf("student: %s, age: %d, grade: %d \n", s2.name, s2.age, s2.grade);

    return 0;
}
