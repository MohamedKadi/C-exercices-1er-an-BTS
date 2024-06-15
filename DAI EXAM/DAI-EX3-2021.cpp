#include<stdio.h>

void lirenotes(int notes[]){
	for(int i=0;i<5;i++){
		printf("Donner la note N %d: \n",i);
		scanf("%d",&notes[i]);
	}
}

void affiche(int notes[]){
	printf("*********** Voila les notes saisir ***************\n");
	for(int i=0;i<5;i++){
		printf("%-5d	",notes[i]);
	}
	printf("\n*********** ********************************\n");
}

int maxnote(int notes[]){
	int max=notes[0];
	for(int i=0;i<5;i++){
		if(max<notes[i]){
			max=notes[i];
		}
	}
	return max;
}

int minnote(int notes[]){
	int min=notes[0];
	for(int i=0;i<5;i++){
		if(min>notes[i]){
			min=notes[i];
		}
	}
	return min;
}

float moynote(int notes[]){
	int moy;
	int sum=0;
	for(int i=0;i<5;i++){
		sum=sum+notes[i];
	}
	moy=sum/5;
	return moy;
}

void mention(int notes[],float moy){
	if(moy >=18){
		printf("Excellent");
	}else if (moy >=16 && moy <18){
		printf("Tres Bien");
	}else if (moy >=14 && moy <16){
		printf("Bien");
	}else if (moy >=12 && moy <14){
		printf("Assez Bien");
	}else if (moy >=10 && moy <12){
		printf("Passable");
	}else{
		printf("Mediocre");
	}
}

int main(){
	int notes[5];
	lirenotes(notes);
	affiche(notes);
	printf("La note Max est : %-10d\n",maxnote(notes));
	printf("La note Min est : %-10d\n",minnote(notes));
	float moy=moynote(notes);
	printf("La moyenne est : %-10f\n",moy);
	printf("La mention est : ");
	mention(notes,moy);
	
}
