#include <stdio.h>

int main(){
	int a;
	double b;
	float c;
	long int d;
	/* printf("entrer a: ");
	scanf("%d",&a);
	printf("entrer b: ");
	scanf("%d",&b);
	printf("entrer c: ");
	scanf("%d",&c);
	printf("entrer d: ");
	scanf("%d",&d); */
	printf("Vueillez entrer a et b et c et d: ");
	scanf("%d %lf %f %d",&a ,&b ,&c ,&d);
	printf("vous etes ecritez a = %d et b = %.2lf et c = %.2f et d = %d",a,b,c,d);
	return 0;
}
