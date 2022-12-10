#include<stdio.h>
#include<stdlib.h>

typedef struct Nde{
    int data;
    struct Nde* next;
}Node;

Node* head=NULL;

void addNode(int n){
	while(n!=0){
		Node* newnode=(Node*)malloc(sizeof(Node));
	printf("Enter Data : \n");
	scanf("%d", &(newnode->data));
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
	n--;

	}
	
}

void reverse(Node* ptr){

    Node* prev=NULL;
    Node* curr=NULL;
    Node* nxt=NULL;

    while(ptr!=NULL){
        curr=ptr;
        nxt=ptr->next;
        ptr=ptr->next;
        curr->next=prev;
        prev=curr;
        
    }
    head=curr;


}

void printLL(Node* ptr){
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next; 
    }
    printf("\n");
}
void main(){
    int n;
    printf("Enter No of Nodes : \n");
    scanf("%d", &n);
    addNode(n);
    printLL(head);
    reverse(head);
    printLL(head);
    
}