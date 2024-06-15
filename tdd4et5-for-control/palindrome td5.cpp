#include<stdio.h>
#include<stdbool.h>
bool palindrome(int T[],int d,int f){
	
	if(d>f){
		return true;
	}
	if(T[d]!=T[f]){
		return false;
	}
	return palindrome(T,d+1,f-1);
	
}

int main(){
	int d=0;
	int f=9;
	int T[f]={1,2,3,4,5,4,3,2,1};
	
	if(palindrome(T,d,f-1)==true){
		printf("true");
		
	}else{
		printf("false");
	}
}
