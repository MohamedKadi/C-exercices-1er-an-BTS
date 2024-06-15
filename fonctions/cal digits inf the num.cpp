#include <stdio.h>

float todigits(int x, int digit){
    int count = 0;
    float s = 0;
    int num;
    do{
        
        num = x % 10;
        x = x / 10;
        
        if(num < digit){
            count++;
            s = s + num;
        }
    }while(x != 0);
    printf("%d\n",count);
    return(s/count);
}

int main()
{
    int num;
    int digit;
    printf("enter a num: ");
    scanf("%d",&num);
    printf("enter a digit: ");
    scanf("%d",&digit);
    printf("%.2f",todigits(num,digit));

    return 0;
}

