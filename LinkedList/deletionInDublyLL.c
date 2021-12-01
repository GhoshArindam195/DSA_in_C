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

int deleteDubly(int pos)
{
    if(pos==1)  //deleting in first.......
    {
        struct Node *t = first;
        first = first->next;
        first->prev = NULL;
        t->next = NULL;
        int temp = t->data;
        free(t);
        t=NULL; //NULL Pointer
        return temp;
    }

    else if(pos==getCount()) //deleting in last.......
    {

        struct Node *t = first;
        while(t->next != NULL)
        {
            t=t->next;
        }
        t->prev->next = NULL;
        t->prev = NULL;
        int temp = t->data;
        free(t);
        t=NULL; //NULL Pointer
        return temp;
    }

    else    //deleting any intermediate node.......
    {

        struct Node *p = first;
        struct Node *q = NULL;
        for(int i=1; i<=pos-1; i++)
        {
            q=p;
            p=p->next;
        }

        q->next = p->next;
        p->next->prev = q;
        p->prev = p->next = NULL;

        int temp = p->data;
        free(p);
        p = NULL;
        return temp;
    }
}

void main()
{
    int arr[]={5, 7, 8, 9, 1,};
    int n=5;

    create(arr, n);
    // printf("%d\n", deleteDubly(1));
    // printf("%d\n", deleteDubly(5));

    printf("%d\n", deleteDubly(2));
    display();
}