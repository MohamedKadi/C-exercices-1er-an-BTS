#include<stdio.h>
#define n 20
int main(){
	int T[n];
	int pos=0,neg=0, povS=0, negS=0;
	int max =-9999, min=9999;
	int S;
	//dakhal les valeurs mn clavier o miqblch 0
	printf("enter the numbers: ");
	for(int i=0; i <n;i++){
		printf("T[%d] = ",i);
		do{
			scanf("%d",&T[i]);
		}while(T[i]==0);
	}
	for(int i = 0; i < n;i++){
		printf("T[%d] = %d ||",i,T[i]);
	}
	//ki7ssb chhal mn num pos o neg o kihsb somme kola whda o ilqa max o min f les num neg
	for(int i=0; i <n;i++){
		if(T[i]>=0){
			pos++;
			povS= povS + T[i];
		}else{
			neg++;
			negS= negS + T[i];
			if(T[i]>max){
				max = T[i];
			}if(T[i] < min){
				min = T[i];
			}
		}
	}
	printf("\npositive: %d\n",pos);
	printf("positive somme: %d\n",povS);
	printf("negative: %d\n",neg);
	printf("negative somme: %d\n",negS);
	printf("negative max: %d\n",max);
	printf("negative min: %d\n",min);
	//somme dyl neg et pos
	for(int i=0; i <n;i++){
		S = S + T[i];
	}
	printf("SOMME: %d\n",S);
	//n7ato les num neg f debut o pos alafin
	int j = n-1;
	int i =0;
	int kas;
	while(i < j){
		if(T[i]> 0){
			kas = T[i];
			T[i] = T[j];
			T[j] = kas;
			j--;
		}else{
			i++;
		}
	}
	for(int i = 0; i < n;i++){
		printf("T[%d] = %d ||",i,T[i]);
	}
}
