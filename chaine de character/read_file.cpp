#include<stdio.h>

int main(){
	FILE *fp;
	char read[100];
	fp=fopen("read.txt","r+");
	
	fgets(read,sizeof(read),fp);
	printf("voila votre text: %s",read);
	
	fclose(fp);
	
}
