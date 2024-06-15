#include<stdio.h>

int main(){
	int n = 7;
	int T[n]={1,2,3,5,6,7,8};
	int d=0, f=n-1,found=0;
	int x=1;
	
	while(d<=f){
		int m=(f+d)/2;
		if(T[m]==x){
			found=1;
			break;
		}else if(T[m]< x){
			d=m+1;
			
		}else{
			f=m-1;	
		}
	}
	printf("%d",found);
	
}
