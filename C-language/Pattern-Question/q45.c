#include <stdio.h>
int main(){
    int n ;
    scanf("%d ",&n );
    int count=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
   if( i==j){
       printf("*");
   }
  else if(j+i==n+1){
      printf("*");
  }
     else{
           printf(" ");
            }
            
        }printf("\n");
       }
         return 0;
}