#include<stdio.h>

int main(){
    printf("--- programme commant payee le montant ---\n");
    int montant,i,Billets1,Billets2,Billets3,Billets4;
    int m1,m2,m3,m4;
    printf("Enter le montant en dollar: ");
    scanf("%d",&montant);
    m1 = montant % 20;
    m2 = m1 % 10;
    m3 = m2 % 5;
    Billets1 = montant / 20;
    Billets2 = m1 / 10;
    Billets3 = m2 / 5;
    Billets4 = m3 / 1;
    printf("Billets de 20$ : %d\n",Billets1);
    printf("Billets de 10$ : %d\n",Billets2);
    printf("Billets de 5$ : %d\n",Billets3);
    printf("Billets de 1$ : %d\n",Billets4);
    return 0;
}