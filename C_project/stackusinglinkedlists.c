# include<stdio.h>
# include<stdlib.h>

struct link{
    int data;
    struct link *next;
};

struct link *top = NULL;

void traversal(struct link *p){
    do{
        printf("Taversed data in link: %d\n",p->data);
        p = p -> next;
    }while(p!=NULL);
}

int isEmpty(struct link *top){
    if(top == NULL){
        printf("Empty list\n");
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct link *top){
    if(top == NULL){
        printf("List is Full\n");
        return 1;
    }
}

struct link *push(struct link *top , int data){
    struct link *n = (struct link*)malloc(sizeof(struct link));
    if(n == NULL){
        printf(" Stack Overflow\n");
        free(n);
        return top;
    }
    else{
        n -> data = data;
        n -> next = top;
        top = n;

        return top;
    }
}

struct link *pop(struct link *top){

    struct link *n = top;
    if(isEmpty(top)){
        printf("Stack underflow\n");
}
else{
        n = top;
        printf("Popped element: %d\n",n -> data);
        top = top -> next;
        free(n);

        return top;
    }
    }

int main(){ 

top = push(top, 4);
top = push(top, 44);
top = push(top, 48);
top = push(top, 94);     
top = pop(top);
isEmpty(top);    
traversal(top);

}