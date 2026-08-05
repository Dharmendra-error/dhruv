#include <stdio.h>
#include <stdlib.h>




struct stack{

    int size;
    int top;
    char *arr;

};

int isEmpty(struct stack *p){

    if(p->top == -1){
        printf("EMPTY\n");
        return 1;
    }
    return 0;
}

int isFull(struct stack *p){

    if(p->top == p->size-1){
        printf("Full\n");
        return 1;
    }
    return 0;
}

void push(struct stack *p, char val){
    if(isFull(p)){
        printf("stack overflow: %c\n",val);
    }
    else{
p -> top++;
p -> arr[p->top] = val;
    }
}

char pop(struct stack *p){
    if(isEmpty(p)){
        printf("Underflow\n");
        return -1;
    }
    else{
        char val = p->arr[p->top];
        p->top--;
        return val;
    }
}

int parenmatch(char *exp){

    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp -> size = 100;
    sp -> top = -1;
    sp -> arr = (char *)malloc(sp->size * sizeof(char));

// Traversal of Expressions.

for(int i = 0; exp[i]!='\0'; i++){
    if(exp[i] == '('){
        push(sp,'(');
    }
    else if(exp[i]==')'){
        if(isEmpty(sp)){
            return 0;
        }
        pop (sp);
    }
    }
    int result = isEmpty(sp);

    free(sp->arr);
    free(sp);

    return result;
}

int main(){

char *exp = "(8*3-1(20%4)";
if(parenmatch(exp))
{
    printf("MATCHING\n");
}
else{
    printf("NOT MATCHING\n");
}
}