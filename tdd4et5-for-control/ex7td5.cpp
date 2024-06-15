#include<stdio.h>
#include<math.h>
int count=0;
double puissanceRapide(double x,int n){
	
	
	if(n==0){
		return 1;
	}
	if(n%2==0){
		count++;
		return pow(puissanceRapide(x,n/2),2);
	}
	count=count+2;
	return x*pow(puissanceRapide(x,(n-1)/2),2);
}

double puissanceRapide(double x,int n){
	
	
	if(n==0){
		return 1;
	}
	if(n%2==0){
		count++;
		return pow(puissanceRapide(x,n/2),2);
	}
	count=count+2;
	return x*pow(puissanceRapide(x,(n-1)/2),2);
}

int main(){
	double x=2;
	int n=30;
	printf("%lf and %d\n",puissanceRapide(x,n),count);
	printf("%d",count);
}
