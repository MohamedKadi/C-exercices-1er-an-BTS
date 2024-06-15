#include <stdio.h> 
#include <math.h>

int main() {
	int x, u, d, c, x1;
	printf("donner un nombre x: ");
	scanf("%d", &x);
	if (x >= 100 && x <= 999) {
		u = x/100;   					 //mi2at
		d = (x%100)/10;					//3acharat
		c = (x%100)%10;					//wa7adat
		x1 = pow(u,3)+pow(d,3)+pow(c,3);					//x1= mi2at^3 + 3acharat^3+ wa7adat^3
		
		if (x == x1) {
			printf("%d est cubique", x);
		} else {
		printf("%d n'est pas cubique", x);
		}
	} else {
		printf("%d ne contient pas trois chiffres", x);
	}
	return 0;
}
