#include<stdio.h>

/*int main(){
	int n= 5;
	int x= 2;
	int s=0, p=1;
	for(int i = 1; i <=n; i++){
		p = 1;
		for(int j = 1;j <= i;j++){
			p = p*x;
		}
		s = s+p;
	}
	printf("%d",s+1);
}*/

/*int main(){
	int x=5;
	
	for(int i =1; i <=x; i++){
		for(int j = 1; j <=i; j++){
			printf("*");
		}
		
		printf("\n");
	}
}*/
/*int main(){
	int x = 5;
	for(int i = 1; i <= x;i++){
		for(int j = i;j <= x; j++){
			printf("*");
		}
		printf("\n");
	}
}*/

int main(){
	int x= 5;
	int y = 5;
	for(int i =1; i <=x;i++){
	
		for(int j = i; j<=x; j++){
			printf(" ");
		}
		for(int k =1;k<=i;k++){
			
			printf("%d",y);
			
		}
		y = y-1;
		for(int z =1; z<i;z++){
			printf("%d",i);
		}
		printf("\n");
	}
	
}




