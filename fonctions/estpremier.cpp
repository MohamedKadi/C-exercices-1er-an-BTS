#include<stdio.h>
#include<stdbool.h>

bool estpremier(int n){
	for(int i = 2; i <= n/2 ;i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	printf("donner un n: ");
	scanf("%d",&n);
	
	if(estpremier(n)==true){
		printf("%d : Vrai",n);
	}else{
		printf("%d : Faux",n);
	}
}
