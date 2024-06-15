#include<stdio.h>

typedef struct point{
	int x;
	int y;
} point;

point remplir(){
	point p;
		printf("donner x: ");
		scanf("%d",&p.x);
		printf("donner y: ");
		scanf("%d",&p.y);
	return p;
}

void affiche(point p[],int size){
	for(int i=0;i<size;i++){
		printf("(%d,%d)\n",p[i].x,p[i].y);
	}		
}

int main(){
	point parray[5];
	
	for(int i=0;i<5;i++){
		parray[i]=remplir();
	}
	affiche(parray,5);
}
