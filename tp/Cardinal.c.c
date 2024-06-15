#include <stdio.h>

int main(){
	int a,b,c,d;
	int x=1;
	
	printf("donner 4 numbers pour la comparaison: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if (a != b){
		x++;
	}
	if (a != c && b != c){
		x++;
	}
	if (a != d && b != d && c != d){
		x++;
	}
	printf("Pour a=%d, b=%d, c=%d et d=%d on aura le cardinal x=%d", a,b,c,d,x++);
}
