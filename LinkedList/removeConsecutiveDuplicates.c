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

void removeDupli()
{
    struct Node *p,*q;
    p=first;
    q=first->next;

    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next = q->next;
            free(q);
            q=p->next;
        }
    }
}

void main()
{
    int arr[]={5, 7, 8, 9, 9, 1, 7, 1, 1};
    int n=9;
    create(arr, n);

    display(); 

    printf("After removing consecutive duplicares :\n");

    removeDupli();

    display();

    
}