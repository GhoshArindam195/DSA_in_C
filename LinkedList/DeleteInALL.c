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

int deleteInPos(int pos)
{
    struct Node *p, *q;
    int temp;
    if(pos==1)  //deleting first node.......
    {
        p = first;
        first=first->next;
        temp = p->data;
        free(p);
        return temp;
    }
    else if(getCount()==pos)    //deleting last node.......
    {
        p=first;
        q=NULL;
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }

        q->next=NULL;
        temp = p->data;
        free(p);
        return temp; 
    }
    else    //deleting intermediate node.......
    {
        p=first;
        q=NULL;
        for(int i=1; i<pos; i++)
        {
            q=p;
            p=p->next;
        }
        q->next = p->next;
        temp = p->data;
        free(p);
        return temp;
    }
}

void main()
{
    int arr[]={5, 7, 8, 9, 1};
    int n=5;
    create(arr, n);

    display(first);

    int deletedItem = deleteInPos(2);
    printf("\n%d\n", deletedItem);
    display(first);


    
}