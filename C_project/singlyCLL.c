#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traversal(struct node *p);
struct node *insrtfirst(struct node *head, int data);

int main (){

struct node *head = (struct node *)malloc(sizeof(struct node));
struct node *second = (struct node *)malloc(sizeof(struct node));
struct node *third = (struct node *)malloc(sizeof(struct node));
struct node *fourth = (struct node *)malloc(sizeof(struct node));

head ->data = 4;
head -> next = second;

second ->data = 3;
second -> next = third;

third ->data = 6;
third -> next = fourth;

fourth ->data = 1;
fourth -> next = head;

traversal(head);
head = insrtfirst(head,44); 
printf("after insatbes\n");
traversal(head);

return 0 ;
}

void traversal(struct node *p){
    struct node *head =  p ;
  
  do{

    printf(" element :%d\n", p->data);
    p = p -> next;
  }while(p!= head);

}

struct node *insrtfirst(struct node *head, int data){

  struct node *newnode = (struct node * )malloc(sizeof(struct node));
  struct node *p = head;
  newnode -> data = data;

while(p->next!= head){
  p= p->next;
}
p -> next = newnode;
newnode -> next = head;

return newnode;

}