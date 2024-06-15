#include <stdio.h>

int factorial(int a){
	int result = 1;
	for(int i = 1; i <= a;i++){
		result = i * result;
	}
	return result;

}

int main(){
	int x;
	printf("enter x: ");
	scanf("%d",&x);
	//factorial(a);
	printf("anwser is: %d",factorial(x));
	
	return 0;
}
