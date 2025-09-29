#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n); // 4 
  for(int i=1; i<=n; i++){ // 1 
      for(int j=1; j<=2*n-1; j++){ // 1 2 3  
      
           if(  i+j>=n+1 && i+j< n +2*i){
              printf("*");
          }
            else{
                printf(" ");
            }
          
      } printf("\n");
      
     
      }
    return 0;
}





