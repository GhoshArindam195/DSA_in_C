#include<stdio.h>

struct student
{
    char name[50];
    int roll;
    int class;
    int sem;
    char course[20];
};

void main()
{
    int n;
    printf("Enter the size of your array: \n");
    scanf("%d", &n);
    struct student students[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter the student %d details(name, roll, class, sem, course)\n", i+1);
        scanf("%s",&students[i].name);
        scanf("%d\n", &students[i].roll);
        scanf("%d\n", &students[i].class);
        scanf("%d\n", &students[i].sem);
        gets(students[i].course);
    }

    for(int i=0; i<n; i++)
    {
        printf("For student 1: \n");
        printf("name = %s\n", students[i].name);
        printf("roll = %d\n", students[i].roll);
        printf("class = %d\n", students[i].class);
        printf("sem = %d\n", students[i].sem);
        printf("course = %s\n", students[i].course);
        printf("***********************\n");
    }

}