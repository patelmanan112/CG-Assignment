#include <stdio.h>
int main(){
    int n ,m;
    scanf("%d %d",&n , &m);
    int count=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
   if( i==1){
       printf("*");
   }
  else if(i==n){
       printf("*");
   }
        else if(j==1){
            printf("*");
        }
        else if(j==m){
            printf("*");
        }
            else{
            
                printf(" ");
            }
            
        }printf("\n");
       }
    return 0;
}