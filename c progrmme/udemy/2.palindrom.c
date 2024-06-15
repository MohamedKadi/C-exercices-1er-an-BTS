#include <stdio.h>

int main(){
	int array[5] = {1, 3, 2, 5, 1};
	int copyarray[5];
	int vrai = 1, i;


	for(i= 4; i >= 0; i--){
		copyarray[i] = array[i];	
		if( copyarray[i] != array[4-(i+1)]){
			vrai=0;
		}	
	}
	if(vrai == 1){
		printf("palindrom");
	}else{
		printf("NON palindrom");	
	}
}
