#include <stdio.h>

int main() {
	char caracter;
	int acount;
	while(1){
		
		printf("enter a caracter: \n");
		scanf(" %c",&caracter);
		
		if (caracter == '*'){
			break;
		}
		if (caracter == 'A' || caracter == 'a'){
			acount++;
		}
	}
	printf("you entered A or a: %d times",acount);
	
}
