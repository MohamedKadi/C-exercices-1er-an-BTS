#include<stdio.h>

typedef struct point{
	int x;
	int y;
} point;

point remplir(){
	point p;
	printf("x: ");
	scanf("%d",&p.x);
	printf("y: ");
	scanf("%d",&p.y);
	
	return p;
}

void affiche(point p[]){
	for(int i=0;i<2;i++){
		printf("(%d,%d)",p[i].x,p[i].y);
	}
	printf("\n");
}

void inc(point p[]){
	for(int i=0;i<2;i++){
		printf("(%d,%d)",p[i].x+p[i].y,p[i].y);
	}
	printf("\n");
}

void dec(point p[]){
	for(int i=0;i<2;i++){
		printf("(%d,%d)",p[i].x-p[i].y,p[i].y);
	}
	printf("\n");
}

point add(point p[]){
	point result;
	result.x=p[0].x * p[1].y+p[1].x * p[0].y;
	result.y=p[0].y * p[1].y;
	return result;
}

point sub(point p[]){
	point result;
	result.x=p[0].x * p[1].y-p[1].x * p[0].y;
	result.y=p[0].y * p[1].y;
	return result;
}

point mul(point p[]){
	point result;
	result.x=p[0].x * p[1].x;
	result.y=p[0].y * p[1].y;
	return result;
}

point div(point p[]){
	point result;
	result.x=p[0].x / p[1].x;
	result.y=p[0].y / p[1].y;
	return result;
}

void smaller(point p[]) {
	affiche(p);
    int result = p[0].x * p[1].y - p[1].x * p[0].y;
    if (result < 0) {
        printf("The smaller point is (%d,%d)\n", p[0].x, p[0].y);
    }else {
    	printf("The smaller point is (%d,%d)\n", p[1].x, p[1].y);
	}
	if (result > 0) {
        printf("The bigger point is (%d,%d)\n", p[0].x, p[0].y);
    }else{
    	printf("The bigger point is (%d,%d)\n", p[1].x, p[1].y);
	}
	if (result == 0){
        printf("Both points are equal\n");
    }
}


/*void bigger(point p[]){
	point result;
	result.x=p[0].x * p[1].y-p[1].x * p[0].y;
	result.y=p[0].y * p[1].y;
	if(result>0){
		printf("the bigger point is (%d,%d)\n",p[0].x,p[0].y);
	}	
}*/



int main(){
	point p1[2];
	for(int i=0;i<2;i++){
		p1[i]=remplir();
	}
	affiche(p1);
	inc(p1);
	dec(p1);
	printf("addition (%d,%d)\n",add(p1).x,add(p1).y);
	printf("substraction (%d,%d)\n",sub(p1).x,sub(p1).y);
	printf("multiplication (%d,%d)\n",mul(p1).x,mul(p1).y);
	printf("division (%d,%d)\n",div(p1).x,div(p1).y);
	smaller(p1);	
}
