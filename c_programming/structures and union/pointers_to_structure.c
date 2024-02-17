#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[50];
    int number;
    int age;
};

//struct pointer as a function parameter
void showStudentData(struct student *st)
{
    printf("\nStudent :  \n");
    printf("Name: %s \n", st->name);
    printf("Number: %d \n", st->number);
    printf("Age: %d \n", st->age);
}

int main()
{
    //New student record creation
    struct student st1;
    struct student st2;

    //filling student 1 details
    strcpy(st1.name, "Krishna");
    st1.number = 5;
    st2.age = 15;

    //filling student 2 details
    strcpy(st2.name, "Ruchi");
    st2.number = 144;
    st2.age = 18;

    //displaying details
    showStudentData(&st1);
    showStudentData(&st2);

    return 0;
}
