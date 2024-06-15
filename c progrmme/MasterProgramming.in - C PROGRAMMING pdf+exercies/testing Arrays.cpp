#include <stdio.h>

int main() {
	int numbers[10];

/* populate the array */
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;
numbers[5] = 60;
numbers[6] = 70;
numbers[7] = 80;
numbers[8] = 90;
numbers[9] = 100;
numbers[10] = 1100;
numbers[11] = 1200;
/* print the 7th number from the array, which has an index of 6 */
printf("The 7th number in the array is %d", numbers[11]);
}
