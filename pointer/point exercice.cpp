#include<stdio.h>
#include<stdlib.h>
typedef struct {
	float x;
	float y;
	
}point;

point *lirepoint(){
	point *p = (point *) malloc(sizeof(float));
	printf("donner x et y: ");
	scanf("%f%f",&p->x,&p->y);
	return p;
}

void affichepoint(point *p){
	printf("x=%.2f et y=%.2f",p->x,p->y);
}

point *milieu(point *p1, point *p2){
	point *p;
	p = (point *) malloc(sizeof(float));
	
	p->x = (p1->x + p2->x) / 2;
	p->y = (p1->y + p2->y) / 2;

	return p;
	
}

int main(){
	point *p;
	point *p1, *p2;
	
	p=lirepoint();
	p1=lirepoint();
	p2=lirepoint();
	
	affichepoint(p);
	printf("le milieu= (%.2f,%.2f)",p->x,p.y;
	
	return 0;
}




















