#include<stdio.h>
int main(){
	int n=10;
	int T[n]={1,2,3,4,5,6,7,8,9,10};
	int x=0;
	int d=0,f=n-1;
	
	int found = 0;
	while(d <= f && found == 0){
		int m=(d+f)/2;
		if(T[m] < x){
			d=m+1;
		}else if(T[m] > x){
			f=m-1;
		}else{
			found = 1;
		}
	}
	
	printf("%d",found);
}
