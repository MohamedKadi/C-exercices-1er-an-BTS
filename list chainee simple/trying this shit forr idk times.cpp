#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
	int data;
	struct node *next;
}node;
node *head=NULL;
node *creernode(int value){
	node *n1;
	n1=(node *) malloc(sizeof(node));
	n1->data=value;
	n1->next=NULL;
	return n1;
}

node *creerlistnode(int value){
	node *head;
	node *n1;
	n1=creernode(value);
	head=(node *) malloc(sizeof(node));
	head=n1;
}

node *insertnode(int value){
	node *n1=creernode(value);
	if(head==NULL){
		head=n1;
	}else{
		node *temp;
		temp=head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = n1;
	}
}

void affichelist(){
	node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

int main(){
	node *n1;
	n1=creernode(0);
	for(int i=1;i<10;i++){
		n1=insertnode(i);
	}
	
	affichelist();
	
	
}
