#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;
};

void traversal(struct node *ptr);
struct node *deleteatbeg(struct node *head);
 struct node *deletebetween(struct node *head, int index);
  struct node *deleteatend(struct node *head);
struct node *deleteafternode(struct node *head,struct node *prevnode, int value);

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
     head = deleteatbeg(head);
    printf("delete at beginning\n");
     traversal(head);
head = deletebetween(head, 1);
      printf("delete at between\n");
      traversal(head);
       head = deleteatend(head) ;
       printf("delete at end\n");
      traversal(head);
      head = deleteafternode(head,second,92);
    printf("delete after a node\n");
     traversal(head); 


    return 0 ;

}

void traversal(struct node *ptr){

    while(ptr!=NULL){
        printf("element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

struct node *deleteatbeg(struct node *head){

struct node *p = head ;
head = head -> next ;
free(p);
return head; 

} 

 struct node *deletebetween(struct node *head, int index){

struct node *p = head;
int i = 0;
 
while(i!= index-1){

p= p -> next;
i++;

}

struct node *q = p -> next ;
p -> next = q -> next ;
free(q);
return head;
} 


 struct node *deleteatend(struct node *head){

struct node *p = head;

while(p->next -> next != NULL){

p = p -> next;

}

struct node *q = p -> next ;
p -> next = NULL ;
free(q) ;
return head;

} 

struct node *deleteafternode(struct node *head,struct node *prevnode, int value){

    struct node *p = head;
    struct node *q = p -> next ;

    while(q->data!= value && q->next!= NULL){

        p = p -> next ;
        q = q -> next;

    }

    p -> next = q -> next ;
    free (q) ;

return head;
} 



