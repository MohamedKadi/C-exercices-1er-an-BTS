#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
}node;
node *head = NULL;

node *creernode(int value){
    node *n=(node *) malloc(sizeof(node));
    n->data=value;
    n->next=NULL;
    return n;
}

node *listnode(int value){
    node *n=creernode(value);
    head=n;
    return head;
}

node *inserernode(int value){
    node *n;
    n=creernode(value);
    node *temp=head;
    if(temp==NULL){
        head=n;
    } else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    return head;
}

node *begining_insert(int value){
	node *n=creernode(value);
	n->next=head;
	head=n;
	return head;
}

void affichenode(){
	if(head==NULL){
		printf("vide");
	} else{
		node *temp=head;
		while(temp!=NULL){
			printf("data: %d\n",temp->data);
			temp=temp->next;
		}
	}	
}

node *includenode(int value,int rang){
	node *n=creernode(value);
	int i=1;
	if(head==NULL){
		head=n;
	}else if(rang==1){
		/*node *temp=head;
		n->next=temp;
		head=n;*/
		begining_insert(value); // same result mea lilfoq
	}else{
		node *temp=head;
		while(temp->next != NULL && i < rang-1){
			temp=temp->next;
			i++;
		}
		n->next=temp->next;
		temp->next=n;
	}
	return head;
}

bool search(int value){
	if(head==NULL){
		return false;
	} else {
		node *temp=head;
		while(temp!=NULL){
			if(temp->data==value){
				return true;
				break;
			}
			temp=temp->next;
		}
	}
}

int main(){
    int value;
    printf("enter a value: ");
    scanf("%d",&value);
    inserernode(value);
    
    printf("enter a value: ");
    scanf("%d",&value);
    inserernode(value);
    
    printf("enter a value: ");
    scanf("%d",&value);
    inserernode(value);
    
    printf("enter a value: ");
    scanf("%d",&value);
    inserernode(value);
    
    printf("enter a value: ");
    scanf("%d",&value);
    begining_insert(value);
    int rang;
    
    printf("enter a value de rang: ");
    scanf("%d",&value);
    printf("enter rang: ");
    scanf("%d",&rang);
    includenode(value,rang);
    
    printf("enter a value to search for: ");
    scanf("%d",&value);
    if(search(value)==true){
    	printf("found");
    } else {
    	printf("not found");
	}
    printf("\n");
    
    
    affichenode();
}

