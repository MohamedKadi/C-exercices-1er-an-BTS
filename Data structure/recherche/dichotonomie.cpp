#include<stdio.h>
#define n 9

int main(){
	int T[n]={1,2,3,4,5,6,7,8,9};
	int e=9;
	int d=0,f=n-1;
	int in;
	while(f>=d){
		in= (d+f)/2;
		if(e < T[in]){
			f=in-1;
		}else if(e > T[in]){
		d = in+1;
		}else{ // e == T[in]
		break;
		}
	}
	if(f<d){
		printf("%d n'appartient pas",e);
	}else{
		printf("%d appartient",e);
	}
	
}
