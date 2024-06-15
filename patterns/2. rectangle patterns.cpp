#include<stdio.h>

/*int main(){
	int n = 5;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(j == 1 || j==5){
				printf("*");
			}else{
				printf("  ");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}*/

/*int main(){
	int n= 5;
	for(int i = 1; i <= n; i++){
		for(int j= 1; j <= n; j++){
			if(i==(n/2)+1 || j==(n/2)+1){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}*/

/*int main(){
	int n = 5;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == j || i+j == n+1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}*/
int main(){
	int n = 5;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == 1 || j == n || j == i ){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}






