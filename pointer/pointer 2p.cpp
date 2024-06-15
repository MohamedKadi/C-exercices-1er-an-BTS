#include<stdlib.h>
#include<stdio.h>

int main(){
	int *p,x,*q;
	
	float y,*pt=&y;
	
	p=NULL; //correct
	
	p=0;    //correct comme null
	x=0;
	//p=x;	//incorrect, bien que x vaille 0!
	q=&x;	
	p=q;	//correct p et q pointe sur des variables de meme type
	
	p=pt;	//incorrect p et  pt pointe sur des variables de type different
}
