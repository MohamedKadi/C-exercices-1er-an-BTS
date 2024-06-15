#include<stdio.h>

struct point {
	int x;
	int y;
};

struct point remplir(){
	struct point a;
	printf("give x and y",a.x,a.y);
	scanf("%d%d",&a.x,&a.y);
	return a;
}

void affiche(struct point a){
	printf("(%d:%d)",a.x,a.y);
}

int main(){
	struct point a;
	a= remplir();
	affiche(a);
	a.x +=1;
	a.y +=3;
	affiche(a);
	
	
}
