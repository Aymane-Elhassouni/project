#include <stdio.h>

int main(){
    printf("--- programme table de multiplication ---\n");
    int i,n;
    printf("enter un nombre : ");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}