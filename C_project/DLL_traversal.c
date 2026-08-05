#include<stdio.h>
#include<stdlib.h>
 
struct node {

    int data;
    struct node *prev;
        struct node *next;
};

void f_traversal(struct node *head);

int main (){

    // create nodes
    struct node *head = (struct node *)malloc(sizeof(struct node));
        struct node *second = (struct node*)malloc(sizeof(struct node));
            struct node *third = (struct node*)malloc(sizeof(struct node));
                struct node *forth = (struct node*)malloc(sizeof(struct node));

                // Link nodes
                head -> data = 12;
                head -> prev = NULL;
                head -> next = second;

                second -> data = 20;
                second -> prev = head;
                second -> next = third;

                third -> data = 30;
                third -> prev = second;
                third -> next = forth;

                forth -> data = 88;
                forth -> prev = third;
                forth -> next = NULL;

f_traversal(head);

                return 0;

}

void f_traversal(struct node *head){
    struct node *p = head ;
    if (p == NULL){
        printf("list is empty\n");

        return ;
    }

    while(p!= NULL){

        printf("Elements data : %d\n",p -> data);
        if(p -> next == NULL){
            break;
        }

        p = p -> next;

    }

    while(p!= NULL){
        printf("Elements data : %d\n",p -> data);
        p = p -> prev;
    }
    
}


