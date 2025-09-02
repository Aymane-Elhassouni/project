#include <stdio.h>

int main(){
    printf("--- programme calcule volume d'un spheren ---\n");

    int r;
    float pi= 3.14,v;
    printf("enter le rayon de sphere: ");
    scanf("%d",&r);
    v = 4.0f/3.0f*(pi*(r*r*r));
    printf("le volume de sphere est: %.2f",v);
    return 0;
}