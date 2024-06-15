#include <stdio.h>

int main(){
	int myarray[5] = {1,4,3,7,1};
	int max = myarray[0] + myarray[1];
	
	for(int i = 0 ; i < 4 ; i++){
		if(max < myarray[i]+myarray[i+1]){
			max = myarray[i]+myarray[i+1];
		}
	}
	printf("%d le max", max);
}
