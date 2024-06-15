#include <stdio.h>

int backintg(char a, char b, char c){
	int x,y,z,result;
	if (a >= 48 && a <= 57 && b >= 48 && b <= 57 && c >= 48 && c <= 57 ){
		x = (a - 48) * 100;
		y = (b - 48) * 10;
		z = (c - 48);
		result = x+y+z;
		return result;
	}else{
		return -1;
	}
}

int main(){
	printf("%d\n", backintg('a','5','6'));
	return 0;
}
