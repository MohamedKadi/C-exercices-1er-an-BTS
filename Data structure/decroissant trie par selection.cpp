#include <stdio.h>
#define n 6
int main(){
	int T[n]={20,12,10,35,25,0};
	int temp;
	for(int i=n-1; i >= 0;i--){
		for(int j=0; j < i;j++){
			if(T[j] < T[i]){
				temp = T[i];
				T[i]= T[j];
				T[j] = temp;
			}
		}
	}
	for(int i=0; i < n; i++)
		printf("%d	",T[i]);
	
}
