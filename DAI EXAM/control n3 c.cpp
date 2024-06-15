/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //q1
    int array[100];
    int i=0;
    do {
        printf("entrer un number %d: ",i);
        scanf("%d",&array[i]);
        if(array[i]>=0){
            i++;
        }
    }while(array[i] != -1 && i < 100);
    //q2
    int taille=0;
    while(array[taille]!=-1){
        taille++;
    }
    printf("\n%d\n",taille);
    //q3
    for(int i=0; i <= taille;i++){
        printf("%-5d",array[i]);
    }
    //q5
    printf("\n");
    int d;
    printf("entrer droit: ");
    scanf("%d",&d);
    for(int i=taille; i >= d;i--){
        array[i+1]=array[i];
    }
    int x;
    printf("\n");
    printf("x: ");
    scanf("%d",&x);
    array[d]=x;
    taille=taille+1;
    for(int i=0; i <= taille;i++){
        printf("%-5d",array[i]);
    }
    
    //q4
    printf("\n");
    int g;
    printf("entrer gauche: ");
    scanf("%d",&g);
    while(g < taille){
        array[g]=array[g+1];
        g++;
    }
    array[g]=-1;
    printf("\n");
    for(int i=0; i <= taille;i++){
        printf("%-5d",array[i]);
    }
    
}

