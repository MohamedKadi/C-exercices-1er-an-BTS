#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c;
	float x1, x2, delta;
	printf("Entrer la nombre de 'a': ");
    scanf("%f", &a);
    
    printf("Entrer le nombre de 'b': ");
    scanf("%f", &b);
    
    printf("Entrer le nombre de 'c': ");
    scanf("%f", &c);
    
	if (a == 0) {
		if (b != 0) {
			if( c != 0){
				printf("la solution est %.2f",-c/b);
				
			} else {
			printf("la solution est l'ensemble R");
			
			}
		} else {
		printf("l'ensemble vide");
		
		}
	} else {
			delta = (b * b)- 4*a*c;
			
			if (delta > 0) {
				x1 = (-b+ sqrt(delta))/ (2*a);
				x2 = (-b- sqrt(delta))/ (2*a);
				
				printf("la solution de cette equation %.2f x^2+%.2f x+%.2f = %.2f et %.2f",a ,b ,c ,x1 ,x2);
				
			} else if (delta < 0) {
				printf("la solution de cette equation %.2f x^2+%.2f x+%.2f n'admet pas a solution en R",a ,b ,c);
				
			} else {
				printf("la solution de cette equation %.2f x^2+%.2f x+%.2f = %.2f",a, b, c, -b/2*a);
				
			}
		}
	return 0;
}
