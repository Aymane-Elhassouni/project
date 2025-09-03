#include <stdio.h>
int n ,x=1;
int i;
int factorielle(int x){
   
   for(i=n;i>1;i--){
    x *= i;
    
   }
   return x;
    
}

int main(){
    printf("Enter un nombre: ");
    scanf("%d",&n);
    int result= factorielle(x);
    printf("Le factoriel de %d est: %d",n,result);
    
    return 0;
}