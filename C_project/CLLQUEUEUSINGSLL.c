#include<stdio.h>
#include<stdlib.h>

 struct queue *f = NULL;
    struct queue *r = NULL;

struct queue{
    int data;
    struct queue *next;
};

void traversal(struct queue *p){
    while(p!=NULL){
        printf("ELEMENT:%d\n",p->data);
        p=p->next;
    }
}

void enqueue(int val){
    struct queue *n = (struct queue *)malloc(sizeof(struct queue));
    if(n == NULL){
        printf("QUeUE IS fULl\n");
    }
    else{
        n -> data = val;
        n -> next = NULL;
        if(f==NULL){
            f = r = n;
        }
        else{
            r -> next = n;
            r = n;
        }
    }
}

int dequeue(){
    struct queue *p = f;
    if(f == NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f -> next;
        printf("Dequeued Element: %d\n",p->data);
        free(p); 
    }

}

int main(){
   traversal(f);
   enqueue(34);
      enqueue(664);
         enqueue(334);
            enqueue(354);
               enqueue(55);

               traversal(f);

               dequeue();
               traversal(f);

return 0;
}