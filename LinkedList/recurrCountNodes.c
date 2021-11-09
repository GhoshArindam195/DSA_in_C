#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first=NULL, *last=NULL;

void create(int arr[], int n)
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));

    t->data = arr[0]; 
    t->next = NULL;
    first=t;
    last=t;

    for(int i=1; i<n; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next=NULL;
        last->next = t;
        last=t;
    }
}


int recurCount(struct Node *temp)
{
    if(temp!=NULL)
        return recurCount(temp->next)+1;
    else
        return 0;
}

void main()
{
    int arr[]={5, 7, 8, 9, 1,};
    int n=5;
    create(arr, n);
    printf("The count is %d",recurCount(first));
}