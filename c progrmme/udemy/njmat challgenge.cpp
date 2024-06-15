#include <stdio.h>

int main()
{
    int n = 5;
    int r = 0, m = 1;

    for(int i = n; i >= 1 ; i--){
        for(int j = i; j > 1; j--){
            printf(" ");
        }
        for(int z=1; z <= n-(n-r)+m; z++){
            printf("*");
        }
        r++;
        m++;

        printf("\n");
    }

    return 0;
}

