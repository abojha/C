#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int *array;
    int back_ind;
    int front_ind;
    int size;
};
int isEmpty(struct queue *q)
{
    if(q->front_ind == q->back_ind)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue *q)
{
    if(q->back_ind == q->size-1)
    {
        return 1;
    }
    return 0;
}
void Enqueue(struct queue *q, int data)
{
    if(isFull(q))
    {
        printf("Queue Overflow\n");
        return;
    }
    q->back_ind++;
    q->array[q->back_ind] = data;
}
int Dequeue(struct queue *q)
{
    int x;
    q->front_ind++;
    x = q->array[q->front_ind];
   
    return x;
}
int main()
{
    struct queue *Q;
    Q = (struct queue *)malloc(sizeof(struct queue));
    Q->back_ind = -1;
    Q->front_ind = -1;
    Q->size = 8;
    Q->array = (int *)malloc(Q->size * sizeof(int));

    int node;
    int visited[7] = {0,0,0,0,0,0,0};

    int a[7][7] = 
    {
        {0,1,1,1,0,0,0},
        {1,0,0,1,0,0,0},
        {1,0,0,1,1,0,0},
        {1,1,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
    int i = 1;
    Enqueue(Q,i);
    printf("%d",i);
    visited[i] = 1;

    while(!isEmpty(Q))
    {
        node = Dequeue(Q);
        for(int j = 0; j < 7; j++)
        {
            if(a[node][j] == 1 && visited[j] == 0)
            {
                printf("%d",j);
                Enqueue(Q,j);
                visited[j] = 1;
            }
        }
    }
    return 0;
}