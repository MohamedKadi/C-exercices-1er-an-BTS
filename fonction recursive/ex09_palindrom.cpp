#include<stdio.h>
#include<stdbool.h>
bool palindrome(int T[],int d,int f){
	bool palindrom = true;
	if(d<=f){
		if(T[d]!=T[f]){
			return false;
		}
		return palindrome(T,d+1,f-1);
	}
}



int main(){
	int f=9;
	int T[f]={1,2,3,4,7,4,3,9,1};
	int d=0;
	if(palindrome(T, d, f-1) == true){
		printf("vrai");
	}else{
		printf("faux");
	}
}
