#include<stdio.h>

int main(){
	FILE *fp;
	
	fp=fopen("text.txt","w");
	
	fputs("bonjour!!",fp);
	
	fclose(fp);
	
}
