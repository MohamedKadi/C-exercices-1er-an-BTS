#include <stdio.h>

int area_of_rectangle(int num1, int num2){
	int anwser = num1 * num2;
	return anwser;
}

int main(){
	int a, b;
	printf("enter num1 et num2: ");
	scanf("%d%d",&a,&b);
	printf("the answer is: %d",area_of_rectangle(a,b));
	return 0;
}
