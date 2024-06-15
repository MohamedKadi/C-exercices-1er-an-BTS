#include<stdio.h>
#include<stdlib.h>
typedef struct {
	float a;
	float b;
	
}complexe;

//pointer li declarina ki pointi ela structure kamla
//a ktpointi ela structure dyl complexe
//bach dkhol structure khass dir (*pointer).variable liwst struct 

//for simplification (*p).a === (p->a) ghnchofoha f JS (kitsmaw "SURCHARGE DES OPERATION ORIENTE OBJET")

int main(){
	complexe *a;
	a = (complexe *) malloc(sizeof(float));
	
	printf("enter a: ");
	scanf("%f",&(*a).a);
	printf("enter b: ");
	scanf("%f",&a->b);
	
	printf("a = %.2f || b = %.2f",(*a).a,(*a).b);
	
	return 0;
}
//exercice pointer d'un tableau de structure (pointer kipointi ela table 3amr les structures)




















