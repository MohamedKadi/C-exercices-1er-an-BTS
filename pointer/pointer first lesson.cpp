#include<stdio.h>

int main(){
	int A,B,*P;
	
	A=10;
	B=50;
	P=&A;	//P=@A
	printf("*p=%d et valeur de p=%x et adresse de a=%X \n",*P,P,&A);	// *p = le contenu ela chno kipointu
	B=*P;   //B=10=A
	printf("*p=%d et B=%d\n",*P,B);
	*P=20;	//A=20
	printf("*p=%d et A=%d\n",*P,A);
	P=&B;	//P=@B
	printf("*p=%d",*P);
}
