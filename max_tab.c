#include<stdio.h>

int main(){
    printf("--- programme qui trouver le Maximum ---\n");

    int tableau[7],i;
    int max = 0;

    printf("enter les 5 nombres\n");
    
    for(i=0;i<5;i++){
        printf("enter le nombre %d: ",i+1);
        scanf("%d",&tableau[i]);
    }
    
    
    for(i=0;i<5;i++){
        if(tableau[i] > max)
        max = tableau[i];
    }

    printf("le nombre max est: %d\n",max);
    return 0;
}