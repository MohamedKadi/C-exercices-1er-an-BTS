#include <stdio.h>

int main (){
	int myArray[3] = {1, 2, 2000};
	int copyarr[3];
		
	for(int i = 0; i< 3; i++){
		copyarr[i] = myArray[i];
	}
	for(int i = 0; i< 3; i++){
		printf("original_date[%d] = %d\n", i, myArray[i]);
		printf("copy_date[%d] = %d\n",i, copyarr[i]);
	}
}
