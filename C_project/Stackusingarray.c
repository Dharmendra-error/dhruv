#include<stdio.h>
#include<stdlib.h>

struct stack{

    int size;
    int top;
    int *arr;

};

int peek(struct stack *s, int i){
    if(s->top - i + 1 <= 0){
        printf("Invalid position\n");
        return -1;
    }
else{
    return s->arr[s->top - i + 1];
}
}

int push(struct stack *s , int val){
    if(isFull(s)){
        printf("stack overflow\n");
    }
    else{
        s->top++;
        s->arr[s->top]=val;
    }
}

void pop(struct stack *s){
    if(isEmpty(s)){
        printf("stack underflow\n");
    }
    else{
        printf("Popped element: %d\n",s->arr[s->top]);
        s->top--;
    }
}

int isEmpty(struct stack *p){
    if(p->top == -1 ){

        printf("is(-_-)empty\n");
        return 1;

    }       else
               {
                 return 0;
               }
}

int isFull(struct stack *p){
    if(p->top == p->size - 1 ){

        printf("is(-_-)Full\n");
        return 1;

    }       else
               {
                 return 0;
               }
}


int main (){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    if(isEmpty(s)){

         printf("is empty\n");
    } else{

           printf("not empty\n");
             }

             if(isFull(s)){

         printf("is(<-__->)Full\n");
    } else{

           printf("not Full\n");
             }
printf("after pushing val to array\n");
             push(s , 15);
             push(s , 14);
             push(s , 19);
             push(s , 5);
             push(s , 1);
printf("after popping top element\n");
             pop(s);

             printf("......Peekaboo......\n");
             printf("Peeked element: %d\n",peek(s, 3));

return 0;
}