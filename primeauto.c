#include <stdio.h>

int main(){

    printf("--- programme Calcul de Prime d'Assurance Auto ---\n");
    int age,tayp_voi,n_d;
    char x='%';

    printf("Enter age du conducteur: ");
    scanf("%d",&age);

    printf("* enter 1 pour sportive.\n* enter 2 pour utilitaire.\n* enter 3 pour familiale.\n");

    printf("Enter type de voiture: ");
    scanf("%d",&tayp_voi);

    printf("Nombre d'accidents au cours des 5 dernieres annees: ");
    scanf("%d",&n_d);

    if(age < 25)
    printf("Prime de base * 1.5\n");

    if(age >= 25 && age <= 65)
    printf("Prime de base\n");

    if(age > 65)
    printf("Prime de base * 1.2\n");

    switch(tayp_voi){
        case 1:
        printf("Prime * 2\n");
        break;
        case 2 :
        printf("Prime * 1.2\n");
        break;
        case 3 :
        printf("Prime * 1.1\n");
        break;
        default :
        printf("aucune taype voitur\n");
    }

    if(n_d > 1)
    printf("Ajoutez 30%c a la prime\n",x);
    return 0;
}