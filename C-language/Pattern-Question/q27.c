#include <stdio.h>

int main() {
   
int n;
scanf("%d",&n);
for(int i=1; i<=n; i++){
    int count=1;
    for(int j=1; j<=2*n-i; j++){
        
       
      if(j>=i){
          printf("%d ",count);
          count++;
      }
      else{
          printf("  ");
      }
    }printf("\n");
}
    return 0;
}