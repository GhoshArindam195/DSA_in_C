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

struct Node* recurLSreach(struct Node *temp, int key)
{
    if(temp==NULL)
    {
        return NULL;
    }
    else if(temp->data == key)
        return temp;
    else
        return recurLSreach(temp->next, key);
}

void main()
{
    int arr[]={5, 7, 8, 9, 1,};
    int n=5;
    create(arr, n);

    int key=0;
    printf("Enter your Search Key");
    scanf("%d", &key);

    struct Node *ans =  recurLSreach(first, key);
    if(ans==NULL)
        printf("The Node is not Found\n");
    else
        printf("The Node data is %d\n", ans->data);

    
}