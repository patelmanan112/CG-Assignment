
#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int count=1; // 4 
  for(int i=1; i<=n; i++){ // 1 
      for(int j=1; j<=2*n; j++){ // 1 2 3  
      if(i+j>=n+1 && i+j < 2*i+n ){
        printf("%d ",count);
        count++;
      }
      else{
        printf("  ");
      }
      } 
      count=1;
      printf("\n");
  }

    return 0;
}