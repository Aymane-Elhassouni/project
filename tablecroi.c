#include <stdio.h>

int main(){

    int tableau[5];
    int i,j,ordre;
    

    printf("enter les 5 nombres\n");

    for(i=0;i<5;i++){
        printf("enter le nombre %d: ",i+1);
        scanf("%d",&tableau[i]);
    }
    for(i=0;i<5-1;i++){
        for(j=i+1;j<5;j++)
        if(tableau[i] > tableau[j]){
            ordre = tableau[i];
            tableau[i] = tableau[j];
            tableau[j] = ordre;
            
        }
        
    }
    for(i=0;i<5;i++){
        printf("%d ",tableau[i]);
    }
    return 0;
}