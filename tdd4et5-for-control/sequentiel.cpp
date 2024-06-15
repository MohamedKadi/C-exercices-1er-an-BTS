#include<stdio.h>
int main(){
	int n=10;
	int T[n]={1,2,3,4,5,6,7,8,9,10};
	int x=11;
	int found;
	for(int i=0; i < n;i++){
		if(T[i]==x){
			found = 1;
			break;
		}
	}
	
	printf("%d",found);
}
