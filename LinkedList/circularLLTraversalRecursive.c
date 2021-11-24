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
    last->next=first;
}

void display( struct Node *p)
{
    static int f=0;
    if(p!=first || f==0)
    {
        f++;
        printf("%d -> ", p->data);
        display(p->next);
    }

    f=0;
}



void main()
{
    int arr[]={5, 7, 8, 9, 1};
    int n=5;
    create(arr, n);

    display(first);
    
}