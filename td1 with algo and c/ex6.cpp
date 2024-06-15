#include <stdio.h>

int main(){
	int x;
	printf("donner un annnée: ");
	scanf("%d", &x);
	if (x%4 == 0 && x%100 != 0 || x%400 == 0) {
		printf("%d bissextile", x);
	} else {
		printf("%d non bissextile",x);
	}
	return 0;
}
