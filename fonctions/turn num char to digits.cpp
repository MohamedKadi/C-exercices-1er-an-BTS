#include <stdio.h>

int todigits(int x){
    x = x - 48;
    return x;
}

int main()
{
    char phrase[3];
    int phraseasci[3];
    for(int i=0; i < 3;i++){
    	printf("enter upper characters: ");
        do{
            scanf("%c",&phrase[i]);
            phraseasci[i] = phrase[i];
        
        }while(phraseasci[i] < 47 || phraseasci[i] > 58);
    }
    for(int i=0;i < 3;i++){
        phrase[i] = todigits(phraseasci[i]);
        printf("%d",phrase[i]);
    }
    

    return 0;
}

