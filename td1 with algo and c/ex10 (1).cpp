#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float x1, x2, delta;

    printf("Enter coefficients of the equation (a, b, c): ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        if (b != 0) {
            x1 = -c / b;
            printf("The solution is %.2f\n", x1);
        } else {
            if (c != 0) {
                printf("No real solutions\n");
            } else {
                printf("Infinite solutions (R)\n");
            }
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("The solutions are: %.2f and %.2f\n", x1, x2);
        } else if (delta < 0) {
            printf("No real solutions\n");
        } else {
            x1 = -b / (2 * a);
            printf("The solution is: %.2f\n", x1);
        }
    }

    return 0;
}

