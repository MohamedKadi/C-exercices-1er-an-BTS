#include<stdio.h>

typedef struct node node;
struct node {
	int data;
	node *next;
};

node *head = NULL;

void insertnode(int value);

int main(){
	insertnode(5);
	insertnode(5);
	insertnode(5);
	insertnode(5);
	insertnode(5);
	insertnode(5);

	return 0;
}

void insertnode(int value){
	node *newnode , *last;
	newnode = new node;
	newnode->data = value;
	if(head == NULL){
		head = newnode;
		newnode->next = NULL;
	}else{
		last = head;
		while(last->next != NULL){
			last = last->next;
		}
		last->next = newnode;
		newnode->next = NULL;
	}	
}
