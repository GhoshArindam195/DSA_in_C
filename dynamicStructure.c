#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
    int len;
    int breadth;
};

void main()
{
    // struct Rectangle r={10, 5};

    // // int *p;
    // struct Rectangle *p=&r;

    // printf("%d\n", (*p).len);
    // printf("%d\n", p->breadth);

    // int *p = (int *) malloc(sizeof(int));
    // struct Rectangle *p = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    // p->breadth=100;
    // p->len=100;

    struct Rectangle *p = (struct Rectangle *) malloc(sizeof(struct Rectangle));
    struct Rectangle *p = (struct Rectangle *) malloc(5*sizeof(struct Rectangle));

    free(p);
    p=NULL;

}