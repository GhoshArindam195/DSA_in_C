#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *last = NULL, *head = NULL, *tail = NULL;

void createFirst(int arr[], int n)
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
void createSecond(int arr[], int n)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));

    t->data = arr[0];
    t->next = NULL;
    head = t;
    tail = t;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        tail->next = t;
        tail = t;
    }
}

void display(struct Node *start)
{
    struct Node *t = start;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}

int getCount()
{
    struct Node *p = first;
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

struct Node* merge(struct Node *first, struct Node *head)
{
    struct Node *third, *l;
    if (first->data < head->data)
    {
        third = l = first;
        first = first->next;
        l->next = NULL;
    }
    else
    {
        third = l = head;
        head = head->next;
        l->next = NULL;
    }

    while (first != NULL && head != NULL)
    {
        if (first->data < head->data)
        {
            l->next = first;
            l = first;
            first = first->next;
            l->next = NULL;
        }
        else
        {
            l->next = head;
            l = head;
            head = head->next;
            l->next = NULL;
        }
    }
    if (first != NULL)
        l->next = first;
    else
        l->next = head;

    return third;
}



void main()
{
    int arr[] = {2, 8, 10, 15};
    int n = 4;
    createFirst(arr, n);

    int arr1[] = {4, 7, 12, 14};
    n = 4;
    createSecond(arr1, n);

    display(first);
    printf("\n");
    display(head);

    printf("\n");
    struct Node *third =  merge(first, head);
    printf("After Merging these two Sorted LL :\n");
    display(third);
}