#include <stdio.h>

int main(){
	//declaration
	int s, h, min, sec;
	//demander utilisateur pour entrer les sec
	printf("donner les secondes: ");
	scanf("%d", &s);
	//convertir
	h = s/3600;
	min = (s%3600)/60;
	sec = (s%3600)%60;
	//resultat
	printf("%d (s) = %d H : %d min : %d s", s, h, min, sec);
	return 0;
}
