#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[3]; //static memory

    int *ptr;

    //Malloc...........
    // ptr = (int *)malloc(3*sizeof(int)); //Heap Memory

    //Calloc...........
    ptr = (int *)calloc(3, sizeof(int)); //Heap Memory

        
    ptr[0]=100;
    ptr[1]=500;
    ptr[2]=300;

    // for(int i=0; i<3; i++)
    //     printf("%d ", ptr[i]);


    //realloc.............
    ptr = (int *)realloc(ptr, 5*(sizeof(int)));

    ptr[3]=200;
    ptr[4]=600;

    for(int i=0; i<5; i++)
        printf("%d ", ptr[i]);

    //free...........
    free(ptr);


}