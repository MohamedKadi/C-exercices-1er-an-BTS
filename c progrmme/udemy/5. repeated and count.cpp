#include <stdio.h>

int main(){
	int n[10] = {5,7,3,4,5,6,8,9,10,3};
	int repeated = 0;
	int count = 0;
	for(int i = 0; i < 10; i++){
		repeated = 0;
		for(int j =0 ; j < 10; j++){
			if(i != j && n[i] == n[j]){
				
				repeated = 1;
			}
		}
		if(repeated == 0){
			count++;
			printf("%d	", n[i]);
		}
	}
	printf("the amount of unique num are count: %d", count);
}
