#include<stdio.h>
int main(){
	int n=5;
	int T[]={2,5,7,9,11};
	int x=8;
	int temp;
	for(int i = 0; i < n; i++){
		if(T[i]<x && x<T[i+1]){
			n = n+1;
			temp = T[i+1];
			T[i+1]= x;
			
			break;
		}
	}
	for(int i = 0; i < n;i++){
		printf("%d ",T[i]);
	}
}

/*
#include<stdio.h>

int main() {
    int n = 5;
    int T[10] = {2, 5, 7, 9, 11}; // Increased the array size to accommodate possible expansion
    int x = 8;
    int temp;
    
    printf("Input the size of array : ");
    scanf("%d", &n);
    
    printf("Input %d elements in the array in ascending order:\n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &T[i]);
    }
    
    printf("Input the value to be inserted : ");
    scanf("%d", &x);

    // Find the position to insert x
    int i;
    for(i = 0; i < n; i++) {
        if (T[i] > x) {
            break;
        }
    }
    
    // Shift elements to the right to make space for x
    for(int j = n; j > i; j--) {
        T[j] = T[j - 1];
    }
    
    // Insert x at the appropriate position
    T[i] = x;
    n++; // Increase the size of the array
    
    // Output the updated array
    printf("The exist array list is :\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
    
    return 0;
}





#include<stdio.h>

int main() {
    int n;
    printf("Input the size of array : ");
    scanf("%d", &n);

    int T[50];

    printf("Input %d elements in the array in ascending order:\n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &T[i]);
    }

    int value, position;
    printf("Input the value to be inserted : ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &position);

    // Shift elements to the right starting from the end to the specified position
    for(int i = n; i >= position; i--) {
        T[i] = T[i - 1];
    }

    // Insert value at the specified position
    T[position - 1] = value;
    n++; // Increase the size of the array

    // Output the updated array
    printf("The current list of the array :\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}

