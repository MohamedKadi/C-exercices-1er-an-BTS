#include<stdio.h>
#include<math.h>

int main(){
	float S =0;
	float x;
	int degre;
	printf("Donner le degré du polynôme : ");
	scanf("%d",&degre);
	int n = degre+1;
	int T[n];
	printf("Donner les coéfficients de P(x) : ");
	for(int i = 0; i < n; i++){
		scanf("%d",&T[i]);
	}
	printf("Donner x : ");
	scanf("%f",&x);
	for(int i = 0; i < n; i++){
		S = S + T[i] * pow(x, i);
	}
	printf("P(%f) = %f",x,S);
}
