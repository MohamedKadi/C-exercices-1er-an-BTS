#include<stdio.h>

struct complexe {
	float a;
	float b;
};

struct complexe lirecomplexe(){
	struct complexe z;
	printf("donner a et b: ");
	scanf("%f%f",&z.a,&z.b);
	return z;
}

void afficheComplexe(struct complexe z){
	if(z.b >= 0){
		printf("%f + %f.i",z.a,z.b);
	}else{
		printf("%f %f.i",z.a,z.b);
	}
}

bool estNull (struct complexe z){
	return z.a==0 && z.b==0;
}
bool sontEgaux (struct complexe z2,struct complexe z1){
	return z1.a==z2.a && z1.b==z2.b;
}
/*int somme (struct complexe z1, struct complexe z2){
	return z1.a	+z2.a && z1.b+z2.b
}*/

struct complexe somme1(struct complexe z1, struct complexe z2){
	struct complexe z;
	z.a = z1.a+z2.a;
	z.b = z1.b+z2.b;
	return z;
}


int main () {
	struct complexe z;
	
	printf("%d",somme1(lirecomplexe))
	z=lirecomplexe();
	if(estNull(z) == true){
		printf("error");
	}else{
		afficheComplexe(z);
	}
	z=somme1;
}
