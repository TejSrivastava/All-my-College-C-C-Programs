#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
};
int isEmpty(struct queue*ptr)
{
    if(ptr->front==ptr->rear)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct queue*ptr)
{
    if(ptr->rear==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue*ptr,int data)
{
    if(isFull(ptr))
    {
        printf("\nQueue is full\n");
    }
    ptr->rear++;
    ptr->arr[ptr->rear]=data;
}
int dequeue(struct queue*ptr)
{
    if(isEmpty(ptr))
    {
        printf("\nQueue is Empty\n");
        return INT_MIN;
    }
    ptr->front++;
    return ptr->arr[ptr->front];
}

int main()
{
    struct queue*ptr=(struct queue*)malloc(sizeof(struct queue));
    ptr->front=-1;
    ptr->rear=-1;
    ptr->size=9;
    ptr->arr=(int *)malloc(ptr->size*sizeof(int));

    for(int i=1;i<=10;i++)
    {
        enqueue(ptr,i);
    }
    if(isFull(ptr))
    {
        printf("\n Queue is Full\n");
    }
    
    for(int i=1;i<=10;i++)
    {
        printf("%d", dequeue(ptr));
    }
    if(isEmpty(ptr))
    {
        printf("\n Queue is Empty ");
    }
}