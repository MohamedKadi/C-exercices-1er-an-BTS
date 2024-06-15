#include<stdio.h>
#include<stdbool.h>
#define n 9
bool palindrome (int T[], int d, int f ){
	bool a;
	if(d>f){
		return a;
	}
	if(T[d] != T[f]){
		return a = false;	
	}
	if(T[d] == T[f]){
		return a = true;	
	}
	return palindrome(T,d+1,f-1);
}

int main(){
	int T[n]={1,2,3,4,8,4,3,2,1};
	int d=0;
	int f=n-1;
	
	if(palindrome (T,d,f)==true)
		printf("true");
		
	if(palindrome (T,d,f)== false)
		printf("false");
}
