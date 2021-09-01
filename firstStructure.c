#include<stdio.h>

struct Employee
{
    int id;
    float salary;
}e1, e2;

void main()
{
    struct Employee e3;

    e1.id=1;
    e1.salary=26000;

    e2.id=2;
    e2.salary=25000;

    e3.id=3;
    e3.salary=30000;


    printf("e1 properties are: \n");
    printf("id = %d\n", e1.id);
    printf("salary = %f\n", e1.salary);
    printf("*******************\n");
    printf("e2 properties are: \n");
    printf("id = %d\n", e2.id);
    printf("salary = %f\n", e2.salary);
    printf("*******************\n");
    printf("e3 properties are: \n");
    printf("id = %d\n", e3.id);
    printf("salary = %f\n", e3.salary);
    printf("*******************\n");
}
