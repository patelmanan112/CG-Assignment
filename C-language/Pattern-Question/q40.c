#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
 if((i+j==n+1) || (i+j==2*i+n-1) || ( i==n)){
     printf("*");
 }
 else{
     printf(" ");
 }
        }
       printf("\n");
    
  
        } 
    return 0;
}