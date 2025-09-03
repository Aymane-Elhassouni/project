#include <stdio.h>

int main(){
    int tableau[] = {3,8,2,9};
    int i,somme=0;
    for(i=0;i<4;i++){
        printf("tableau[%d] = %d\n",i,tableau[i]);
    }
    for(i=0;i<4;i++){
        somme += tableau[i];
    }
    printf("somme des elements est: %d\n",somme);

    return 0;
}