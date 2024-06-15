#include<stdio.h>

int table(int T[],int n){
	
	if (n < 0) {
        return 0;
    }
    else {
        return T[n] + table(T, n - 1);
    }
}



int main(){
	int n=5;
	int T[n]={1,2,3,4,5};
	
	
	printf("%d",table(T,n-1));
	
}
