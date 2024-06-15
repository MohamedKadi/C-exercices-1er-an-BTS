#include <stdio.h>
int main(){
	int size, x;
	
	printf("enter size: ");
	scanf("%d",&size);
	
	for (int i = 1; i<=size; i++){
		int g=x;
		printf("enter a num: ");
		scanf("%d", &x);
		}
		printf("%d\n", x);
	}
}


/* int main(){
	int num;
	int sum = 0;
	
	printf("enter num: ");
	scanf("%d",&num);
	
	for(int i = 1; i <= num; i++){
		if ( i % 3 == 0 || i % 5 == 0){
			printf("%d\n",i);
			sum = sum + i;
		}
		
	}
	printf("the sum is: %d",sum);
}




/*int main(){
	int num;
	int sum = 0;
	
	printf("enter num: ");
	scanf("%d",&num);
	
	for(int i = 1; i <= num; i++){
		if ( i % 3 == 0 && i % 5 == 0){
			printf("%d ",i);
			sum = sum + i;
		}
		
	}
	printf("the sum is: %d",sum);
}













/*int main (){
	/*
	   1
	  1 2 3
	 1 2 3 4
	*/
/*	int rows, k=1;
	
	printf("enter rows: ");
	scanf("%d", &rows);
	int space = rows-1;

	for (int i = 1; i <= rows; i++){
		for(int g = space; g>=1; g--){
			printf(" ");
		}
		for(int j = 1; j <= i; j++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
		space--;
	}
	
	
	
	return 0;
}













/*int main(){
	int num, i;
	printf("enter a num: ");
	scanf("%d", & num);
	
	while (num >= 1){
		i = i+2;
		printf("%d,\n", i);
		num--;
	}
	
}


/*int main(){
	int num, k, i = 1;
	
	printf("enter a num: ");
	scanf("%d", & num);
	
	while (i <= 10){ // 1+2+3+4+5
		k= num*i;
		printf("%d * %d = %d\n",num, i, k);
		i++;
	}
	
}*/

/*int main(){
	int num, k= 0, i = 1;
	
	printf("enter a num: ");
	scanf("%d", & num);
	
	while (i <= num){ // 1+2+3+4+5
		k = k+i;
		i++;
	}
	printf("the sum is: %d", k);
}*/
