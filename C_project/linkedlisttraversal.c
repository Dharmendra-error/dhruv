#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;
};

void traversal(struct node *ptr);
struct node *insertbeg(struct node *head, int data);
struct node *insertbetween(struct node *head, int data, int index);
struct node *insertatend(struct node *head, int data);
struct node *insertafternode(struct node *head,struct node *prevnode, int data);


int main(){

    struct node *head, *second, *third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head -> data = 12;
    head -> next = second;

        second -> data = 72;
    second -> next = third;

        third -> data = 92;
    third -> next = NULL;

    traversal(head);
    head = insertbeg(head, 45);
    printf("insert at beginning\n");
     traversal(head);
     insertbetween(head,34,2);
     printf("insert at between\n");
     traversal(head);
     insertatend(head,65);
      printf("insert at end\n");
     traversal(head);
     head = insertafternode(head,second, 98);
    printf("insert after a node\n");
     traversal(head);


    return 0 ;

}

void traversal(struct node *ptr){

    while(ptr!=NULL){
        printf("element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

struct node *insertbeg(struct node *head, int data){

struct node *newnode = (struct node*)malloc(sizeof(struct node));
newnode -> next = head;
newnode -> data = data;
return newnode;
}

struct node *insertbetween(struct node *head, int data, int index){

struct node *newnode = (struct node*)malloc(sizeof(struct node));
struct node *p = head;
int i = 0;
 
while(i!= index-1){

p= p -> next;
i++;

}

newnode -> data = data ;
newnode ->next = p ->next;
p ->next = newnode;
return head;
}

struct node *insertatend(struct node *head, int data){

struct node *newnode = (struct node*)malloc(sizeof(struct node));
struct node *p = head;

while(p->next!= NULL){

p = p -> next;

}

newnode -> data = data ;
p -> next = newnode ;
newnode -> next = NULL;
return head;
}

struct node *insertafternode(struct node *head,struct node *prevnode, int data){

struct node *newnode = (struct node*)malloc(sizeof(struct node));
 
newnode ->data = data;

newnode->next = prevnode->next;
prevnode->next = newnode;
return head;
}



