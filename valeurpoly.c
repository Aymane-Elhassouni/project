#include <stdio.h>

int main(){
    printf("--- programme qui affiche la valeur d'un polynome ---\n");
    float x;
    printf("enter la valeur de x: ");
    scanf("%f",&x);
    x = 3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+7*x-6;
    printf("valeur du polynome est: %.2f",x);
    return 0;
}