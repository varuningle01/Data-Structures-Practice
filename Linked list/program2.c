// Insertion at the front of the linkedlist :

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void PrintLL(struct Node* n){
    while(n!=NULL){
        printf("%d ", n->data);
        n=n->next;
    }
}

void push(struct Node ** head_ref, int new_data){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    *head_ref=new_node;
}



void main(){

    struct Node* head= (struct Node*)malloc(sizeof(struct Node));
    struct Node* second= (struct Node*)malloc(sizeof(struct Node));
    struct Node* third= (struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;

    PrintLL(head);
    push(&head, 5);
    PrintLL(head);
    



}