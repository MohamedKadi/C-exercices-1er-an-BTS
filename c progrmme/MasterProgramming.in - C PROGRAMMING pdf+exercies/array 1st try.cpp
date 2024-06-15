#include <stdio.h>

int main(){
	int phone[10] = {0,7,0,8,8,14,2,6,9,10};
	int max;
	phone[0] = max;
	for(int i = 0;i < 10; i++){
		if(max <= phone[i]){
			max= phone[i];
		}
	}
	printf("le max est %d", max);
}
