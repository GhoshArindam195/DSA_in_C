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

void display(struct Node *first)
{
    struct Node *t = first;
    while(t!=NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}

void insert(int index, int value)
{
    struct Node *t = (struct Node*) malloc(sizeof(struct Node));
    t->data=value;
    t->next=NULL;

    if(index==0)    //insertion at first............
    {
        t->next = first;
        first = t;

    }
    else if(index>0)
    {
        struct Node *p=first;
        for(int i=0; i<index-1 && p->next!=NULL; i++)
        {
            p=p->next;
        }

        if(p!=NULL) //insertion at intermediate............
        {
            t->next = p->next;
            p->next = t;
        }
        else    //insertion at end................
        {   
            p->next=t;
        }
    }
}

void main()
{
    int arr[]={5, 7, 8, 9, 1};
    int n=5;
    create(arr, n);

    insert(20, 100);

    display(first);
    
}