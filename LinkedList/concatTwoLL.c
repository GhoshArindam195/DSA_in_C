#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first=NULL, *last=NULL, *head=NULL, *tail=NULL;

void createFirst(int arr[], int n)
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
void createSecond(int arr[], int n)
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));

    t->data = arr[0]; 
    t->next = NULL;
    head=t;
    tail=t;

    for(int i=1; i<n; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next=NULL;
        tail->next = t;
        tail=t;
    }
}

void display(struct Node *start)
{
    struct Node *t = start;
    while(t!=NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}


int getCount()
{
    struct Node *p = first;
    int c=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
}

void concat()
{
    struct Node *p = first;
    while(p->next!=NULL)
        p=p->next;

    // printf("%d", p->data);
    p->next = head;

    head=NULL;
}

void main()
{
    int arr[]={5, 7, 8, 9};
    int n=4;
    createFirst(arr, n);

    int arr1[]={1, 7, 1};
    n=3;
    createSecond(arr1, n);

    
    display(first); 
    printf("\n");
    display(head); 

    concat();
    printf("\n");
    printf("After concatinating these two LL :\n");
    display(first);
}