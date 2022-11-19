// initializing and printing a Linked list

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

void main(){
    // struct Node* head=NULL;
    // struct Node* second=NULL;
    // struct Node* third=NULL;

    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;

    PrintLL(head);



}