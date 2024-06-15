#include <stdio.h>

char length(char character){
	if (character >= 'A' && character <= 'Z'){
		int lowercase = character - 'A' + 'a';
		printf("%c",lowercase);
	}else {
		return -1;
	}
}

int main(){
	length('H');
	
	return 0;
}
