#include<stdio.h>
#include<string.h>

// struct Student
// {
//     int id;  //8B
//     char name[10];   //10B
// }s1; //18B

union Student
{
    int id; //4B
    float marks;   //4B
    char name[30];  //30B
}s1;    //30B

void main()
{
    union Student s2;
    strcpy(s1.name, "Arindam");

    s1.marks=29.9;

    s1.id=1;
    printf("%d\n", s1.id);
    printf("%f\n", s1.marks);
    puts(s1.name);

}