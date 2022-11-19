// Insertion of a new node after the given node


#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data){
    struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
    new_node->next=*head_ref;
    new_node->data=new_data;
    *head_ref=new_node;
}

void insertion(struct Node* prev_node, int new_data){
    if(prev_node == NULL){
        printf("The given previous node cannot be NULL");
        return;
    }
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}

void append(struct Node** head_ref,int new_data){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=NULL;
    struct Node* last=*head_ref;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }    
    last->next=new_node;
    return;
}

void PrintLL(struct Node* n){
    while(n!=NULL){
        printf("%d ", n->data);
        n=n->next;
    }
}
void main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    // struct Node* head=NULL;

    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;

    PrintLL(head);
    push(&head, 5);
    printf("\n");
    PrintLL(head);
    printf("\n");
    insertion(second, 100);
    PrintLL(head);
    printf("\n");
    
    append(&head, 500);
    PrintLL(head);
}