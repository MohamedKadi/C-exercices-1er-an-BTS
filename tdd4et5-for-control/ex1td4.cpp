#include<stdio.h>
#define n 10
int main() {
	int T[n]={1,2,3,4,5,6,7,8,9,10};
	int x = 0;
	int found = 0;
	for(int i=0; i < n; i++){
		if(T[i]==x){
			found = 1;
		}
	}
	
	printf("%d",found);
}
