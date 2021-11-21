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

void display()
{
    struct Node *t = first;
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

void reverseLLNodes()
{
    struct Node *p, *q, *r;
    p=first;
    q=NULL;
    r=NULL;

    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }

    first = q;
}



void main()
{
    int arr[]={5, 7, 8, 9, 1, 7, 1};
    int n=7;
    create(arr, n);
    display(); 

    printf("After reversing the Linked List: \n");

    reverseLLNodes();
    display();

}