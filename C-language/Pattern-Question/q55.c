#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i++){
        for(int j=1 ; j<=2*n-1 ; j++){
         if(i+j<n+1 && j-i>n+1 && i-j>n-1 && i+j>=3*n-1){
            printf(" ");
         }



         else{
            printf("ccv ");
         }
        }printf("\n");
    }
    return 0;
}