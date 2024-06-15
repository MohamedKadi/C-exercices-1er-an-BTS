#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	while (x <= 100) {
		printf("%d\n",x);
		x++;
	}
	printf("finish");
}
