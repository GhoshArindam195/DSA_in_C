#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *front=NULL, *rear=NULL;

int n;

int getCount()
{
    int c = 0;
    struct Node *temp = front;

    while(temp != NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}

void enqueue(int val)
{

    if(n == getCount())
    {
        printf("Queue is full\n");
        return;
    }

    struct Node *t = (struct Node *) malloc(sizeof(struct Node));
    t->data = val;
    t->next = NULL;
    
    if(front == NULL)
    {
        front = rear = t;
    }
    else
    {
        rear->next = t;
        rear = t;
    }
}

int dequeue()
{
    int val;
    if(front == NULL)
    {
        printf("Queue is Empty\n");
        return -1;
    }

    struct Node *t = front;
    front = front->next;
    t->next=NULL;
    val = t->data;

    free(t);
    t=NULL;

    return val;
}



void main()
{
    printf("Enter the size of your Queue\n");
    scanf("%d", &n);

    printf("Now enter your %d queue elements\n", n);
    int inp;
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &inp);
        enqueue(inp);
    }

    enqueue(100);
    int out;
    for(int i=1; i<=n; i++)
    {
        out = dequeue();
        if(out!=-1)
        {
            printf("%d\n", out);
        }
    }

    dequeue();
}
