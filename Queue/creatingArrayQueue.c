#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int front;
    int rear;
    int size;
    int *q;
};

struct Queue que;

void isFull()
{
    if(que.rear == que.size-1)
        printf("Queue is full!!\n");
}


void enqueue(int val)
{
    if(que.rear == que.size-1)
        printf("Queue is full!!\n");
    else
    {
        que.rear++;
        que.q[que.rear] = val;
    }
}

int dequeue()
{
    int delValue=-1;
    if(que.front == que.rear)
        return delValue;

    else
    {
        que.front++;
        delValue = que.q[que.front] ;
    }

    if(que.front == que.rear)
        que.front = que.rear = -1;


    return delValue;
}


void main()
{
    que.size=10;
    que.front = que.rear = -1;
    que.q = (int *) malloc(sizeof(int)*(que.size));

    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());

}
