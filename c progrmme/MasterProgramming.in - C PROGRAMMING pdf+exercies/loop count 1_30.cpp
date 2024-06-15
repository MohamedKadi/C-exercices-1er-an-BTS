#include <stdio.h>

int main(){
	int x= 2,d = 1;
	float i=0.01;
	while (d <= 30){
		i= i*x;
		d++;
	}
	printf("%.2f ", i);
}
