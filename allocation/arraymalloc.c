#include<stdio.h>
#include<stdlib.h>
int main(){
	
	
	int *n = malloc(sizeof(int));
	
	printf("size of table: ");
	scanf("%d",&(*n));
	int *sizeoftab = malloc((*n)*sizeof(int));
	printf("Enter %d integers:\n",(*n));
    for (int i = 0; i < *n; i++) {
        scanf("%d", &*(sizeoftab+i)); // Fill the array with user input
    }
	
    // Print the array
    printf("The array you entered is:\n");
    for (int i = 0; i < *n; i++) {
        printf("%d ",*(sizeoftab+i));
    }
    printf("\n");
    int *min = malloc(sizeof(int));
    (*min) = sizeoftab[0];
    for (int i = 0; i < *n; i++) {
        if((*min)>*(sizeoftab+i)){
        	*min = *(sizeoftab+i);
		}
    }
	printf("\nmin : %d",(*min));
    // Free dynamically allocated memory
    free(sizeoftab);
}
