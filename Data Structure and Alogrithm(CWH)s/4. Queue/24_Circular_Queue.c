#include<stdio.h>
#include<stdlib.h>
struct circular_queue
{
    int *array;
    int front;
    int rear;
    int size;
};
struct circular_queue * creation(int n)
{
    struct circular_queue *cq;
    
    cq = (struct circular_queue*)malloc(sizeof(struct circular_queue));
    cq->size = n;
    cq->front = 0;
    cq->rear = 0;
    cq->array = (int *)malloc(n * sizeof(int));
    return cq;
}
int isEmpty(struct circular_queue * q)
{
    if(q->rear == q->front)
    {
        return 1;
    }
    return 0;
}
int isFull(struct circular_queue *q)
{
    if((q->rear+1)%q->size == q->front)
    {
        return 1;
    }
    return 0;
}
void ENQ(struct circular_queue *q, int val)
{
    if(isFull(q))
    {
        printf("full");
    }
    else
    {
        q->rear = (q->rear+1)%q->size;
        q->array[q->rear] = val;
      
    }
}
int DEQ(struct circular_queue *q)
{
    
    if(isEmpty(q))
    {
        printf("Empty");
    }
    else
    {
        int val;
         q->front = (q->front+1)%q->size;
        val = q->array[q->front];
       
        return val;
    }
}
int main()
{
    struct circular_queue *s;
    s = creation(5);
    // printf("%d",DEQ(s));
    printf("%d",isEmpty(s));
    ENQ(s,2);
    ENQ(s,2);
    ENQ(s,2);
    ENQ(s,2);
    ENQ(s,2);

     

    
    
    
   
   
    
    
   
    // printf("%d",isEmpty(s));
    // DEQ(s);
    // printf("%d",isEmpty(s));



    return 0;
}