#include<stdio.h>
#define n 20
int main(){
	int T[n];
	//question 1
	printf("enter les nombres de T\n");
	for(int i = 0; i < n; i++){
		printf("T[%d] = ",i);
		do{
		scanf("%d",&T[i]);	
		}while(T[i]<0);
	}
	//question 2
	int S=0;
	for(int i = 0; i < n; i++){
		S = S+T[i];
	}
	printf("Somme = %d",S);
	//question 3
	int max = T[0];
	int min = T[0];
	int indicemax,indicemin;
	for(int i = 0; i < n; i++){
		if(T[i] > max){
			max = T[i];
			indicemax = T[i];
		}if(T[i] < min){
			min = T[i];
			indicemin = T[i];
		}
	}
	printf("min = %d et leur indice %d",min,indicemin);
	printf("max = %d et leur indice %d",max,indicemax);
	//question 4
	int pair=0,impair=0;
	for(int i = 0; i < n; i++){
		if(T[i]%2 == 0){
			countpos++;
		}else{
			countneg--;
		}
	}
	printf("pair = %d || impair = %d",pair,impair);
	//question 5
	int ecart = 0;
	int pre;
	for(int i = 0; i < n-1; i++){
		pre = T[i+1]-T[i];
		if(pre > 0){
			if(pre > ecart){
				ecart = T[i+1]-T[i];
			}
		}
	}
	printf("ecart min %d",ecart);
	//question 6
	int x;
	int occ=0;
	printf("enter x: ");
	scanf("%d",&x);
	for(int i = 0; i < n; i++){
		if(T[i] == x){
			occ++;
		}
	}
	printf("%d n occurrences %d",x,occ);
	//question 7
	int L=0,taille=0;
	/*
	#include <stdio.h>

int main() {
  int T[] = {1, 2, 3, 4, 2, 2, 2, 5, 6, 7, 2, 2, 2, 8};
  int n = sizeof(T) / sizeof(T[0]);
  int i, j, max_start, max_len;
  max_len = 0;
  max_start = 0;

  for (i = 0; i < n; i++) {
    int count = 1;
    for (j = i + 1; j < n; j++) {
      if (T[j] == T[i]) {
        count++;
      } else {
        break;
      }
    }
    if (count > max_len) {
      max_len = count;
      max_start = i;
    }
  }

  printf("The longest consecutive sequence of 2 starts at index %d and has a length of %d\n", max_start, max_len);

  return 0;*/
}
}
