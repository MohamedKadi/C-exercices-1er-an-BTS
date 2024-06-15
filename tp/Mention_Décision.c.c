#include <stdio.h>

int main() {
	int la_note;
	printf("donner la note: ");
	scanf("%d", &la_note);
	
	if (la_note >= 0 && la_note <= 20){
		if (la_note < 10){
			printf("Non admis");
		} else if (la_note < 12){
			printf("« Admis avec mention passable");
		} else if (la_note < 14){
			printf("Admis avec mention assez bien");
		} else {
			printf("Admis avec mention bien");
		}
		
	} else {
		printf("there is an error:)");
	}
	
	return 0;
}
