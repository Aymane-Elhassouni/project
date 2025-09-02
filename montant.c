#include <stdio.h>

int main(){
    printf("--- programme qui calcule tax ajoutee ---\n");
    float montant;
    printf("Enter un montant en dollar: ");
    scanf("%f",&montant);
    float dollar = montant;
    montant /= 20;
    montant +=dollar;
    printf("Avec tax ajeutee: $%.2f",montant);

    return 0;
}