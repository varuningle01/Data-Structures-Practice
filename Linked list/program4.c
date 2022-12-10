#include<stdio.h>
#include<stdlib.h>

typedef struct Nde{
    int data;
    struct Nde* next;
}Node;

Node* head=NULL;
Node* createNode(){
    Node* newnode=(Node*)malloc(sizeof(Node));
    printf("Enter Data : \n");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    return newnode;
}

void addNode(){
    Node* newnode= createNode();
    if(head==NULL){
        head=newnode;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void addFirst(){
    Node* newnode= createNode();
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
int countNodes(){
   int count;
   Node* temp=head;
   while(temp!=NULL){
       count++;
       temp=temp->next;
   }
   return count;
}

void addPos(int pos){
    
    if(pos<0 || pos> countNodes()){
        printf("Enter Valid Position\n");
    }
    else{
        
        if(pos==0){
            addFirst();
        }
        else if(pos==countNodes()){
            addNode();
        }
        else{
            Node* newnode=createNode();
            Node* temp=head;
            while(pos-2){
                temp=temp->next;
                pos--;
            }
            newnode->next=temp->next;
            temp->next=newnode;
        }
        
    }
    
}

void printLL(){
    Node* temp=head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main(){
    int n;
    printf("Enter Number of Nodes : ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        addNode();
    }
    printLL();
    addFirst();
    printLL();
    addPos(4);
    printLL();
}