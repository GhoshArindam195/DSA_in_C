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
    if((que.rear+1)% que.size == que.front)
        printf("Queue is full!!\n");
}


void enqueue(int val)
{
    if((que.rear+1)% que.size == que.front)
        printf("Queue is full!!\n");
    else
    {
        que.rear = (que.rear+1) % que.size; 
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
        que.front = (que.front+1) % que.size;
        delValue = que.q[que.front] ;
    }


    return delValue;
}


void main()
{
    que.size=10;
    que.front = que.rear = 0;
    que.q = (int *) malloc(sizeof(int)*(que.size));

    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());

}
