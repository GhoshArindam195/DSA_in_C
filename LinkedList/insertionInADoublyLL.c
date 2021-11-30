#include<stdio.h>
#include<stdlib.h>

struct Node
{
    
    struct Node *prev;
    int data;
    struct Node *next;
} *first=NULL, *last=NULL;

void display()
{
    struct Node *temp = first;
    while(temp!=NULL)
    {
        printf("%d -> ", temp->data);
        temp=temp->next;
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
void create(int arr[], int n)
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));

    t->prev=NULL;
    t->data = arr[0]; 
    t->next = NULL;
    first=t;
    last=t;

    for(int i=1; i<n; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->prev=last;
        t->data = arr[i];
        t->next=NULL;
        last->next = t;
        last=t;
    }
}

void insertInDoubly(int pos, int val)
{
    struct Node *t = (struct Node *) malloc(sizeof(struct Node));
    t->data=val;
    if(pos==0)  //insertion at first.........
    {
        t->next = first;
        first->prev = t;
        first = t;
    }
    else if(pos == getCount())  //insertion at last........
    {
        struct Node *p = first;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        t->prev = p;
        p->next = t;
    }
    else    //insertion in some intermediate position...........
    {
        struct Node *p = NULL;
        struct Node *q = first;

        for(int i=1; i<=pos; i++)
        {
            p=q;
            q=q->next;
        }

        p->next = t;
        t->prev = p;
        q->prev = t;
        t->next = q;
    }
}

void main()
{
    int arr[]={5, 7, 8, 9, 1,};
    int n=5;

    create(arr, n);

    insertInDoubly(0, 100);
    insertInDoubly(6, 200);
    insertInDoubly(2, 500);

    display();
}