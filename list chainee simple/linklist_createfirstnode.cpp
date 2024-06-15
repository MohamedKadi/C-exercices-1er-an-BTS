#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
	int data;
	struct node *next;
};
node *head = NULL;
int main(){
	
	node *point = (node *) malloc(sizeof(node));
	(*point).data = 9;
	point->next =NULL;
	head = point;
	node *point1 = (node *) malloc(sizeof(node));
	(*point1).data = 20;
	point1->next =NULL;
	head = point1;
	printf("%d\t%d",(*point).data,point1->data);
}
