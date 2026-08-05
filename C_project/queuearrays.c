#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q , int val){
    if(isFull(q)){
        printf("Queue overflow\n");
    }
    else{
        q->r = q->r+1;
        q->arr[q->r] = val;
        printf("Enqueued element:%d\n",val);
    }
    }


int dequeue(struct queue *q){
    if(isEmpty(q)){
        printf(" Queue is Empty \n");
        return -1;
    }
    else{
        q->f++;
        return q->arr[q->f];
}
}

int main(){

    struct queue q;
    q.size = 5;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q , 44);
        enqueue(&q , 54);
            enqueue(&q , 94);
                enqueue(&q , 49);

                   printf("Dequeued element:%d\n",dequeue(&q));

   if(isEmpty(&q)){
    printf("Queue is empty\n");
   }

   if(isFull(&q)){
        printf("Queue is Full\n");
   }

    return 0;
}