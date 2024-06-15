#include<stdio.h>
#define n 10
int main() {
	int T[n]={1,2,3,2,10,6,2,8,9,10};
	int x = 2;
	int occ = 0;
	for(int i=0; i < n; i++){
		if(T[i]==x){
			occ++;
		}
	}
	
	printf("%d",occ);
}
