#include<stdio.h>
#define n 10

int main(){
	int T[n];
	int x = 4;
	for(int i = 0; i < n;i++){
		printf("T[%d] = ",i);
		scanf("%d",&T[i]);
	}
	int i =0;
	int left = 0, right = n-1;
	while(i <= right){
		if(T[i] < x){
			int temp = T[i];
			T[i] = T[left];
			T[left] = temp;
			left++;
			i++;
		}else if(T[i] > x){
			int temp = T[i];
			T[i] = T[right];
			T[right] = temp;
			right--;
		}else{
			i++;
		}
	}
	for(int i = 0; i < n;i++){
		printf("T[%d] = %d",i,T[i]);
	}
	
}
