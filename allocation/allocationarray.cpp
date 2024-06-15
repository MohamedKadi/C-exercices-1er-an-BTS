#include <stdio.h>
#include <stdlib.h>

int main() {
    int *n = malloc(sizeof(int));
    
    if (n == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("size of table: ");
    scanf("%d", n);
    
    int *sizeoftab = malloc((*n) * sizeof(int));
    
    if (sizeoftab == NULL) {
        printf("Memory allocation failed.\n");
        free(n); // Free previously allocated memory before returning
        return 1;
    }
    
    printf("Enter %d integers:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &(sizeoftab[i])); // Fill the array with user input
    }

    // Print the array
    printf("The array you entered is:\n");
    for (int i = 0; i < *n; i++) {
        printf("%d ", sizeoftab[i]);
    }
    printf("\n");
    
    int min = sizeoftab[0];
    for (int i = 1; i < *n; i++) {
        if (min > sizeoftab[i]) {
            min = sizeoftab[i];
        }
    }
    printf("min : %d\n", min);
    
    // Free dynamically allocated memory
    free(sizeoftab);
    free(n);
    
    return 0;
}
`

