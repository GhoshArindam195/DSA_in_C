#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *last = NULL;

void create(int arr[], int n)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));

    t->data = arr[0];
    t->next = NULL;
    first = t;
    last = t;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *first)
{
    struct Node *t = first;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}

void insertInSorted(int val)
{
    struct Node *p = first, *q = NULL;

    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = val;
    t->next = NULL;
    if (p->data > val)
    {
        t->next = first;
        first = t;
    }
    else
    {
        while (p != NULL && p->data < val)
        {
            q = p;
            p = p->next;
        }
        t->next = p;
        q->next = t;
    }
}

void main()
{
    int arr[] = {3, 7, 11, 20};
    int n = 4;
    create(arr, n);
    display(first);
    printf("\n");

    insertInSorted(10);

    display(first);
}