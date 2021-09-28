#include<stdio.h>

struct Employee
{
    int id; //4B
    float sal;  //4B
};

void main()
{
    // int arr[5];
    struct Employee emp[5];

    // for(int i=0; i<5; i++)
    // {
    //     printf("Enter the Employee %d id and salary\n", i+1);
    //     scanf("%d %f", &emp[i].id, &emp[i].sal);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("For employe %d\n", i+1);
    //     printf("id = %d\n", emp[i].id);
    //     printf("salary = %f\n", emp[i].sal);
    //     printf("*****************\n");
    // }

    printf("%d\n", sizeof(emp[0]));
    printf("%d\n", sizeof(emp[1]));
    printf("%d\n", sizeof(emp));
    

}