#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);

  for(int i=1; i<=n; i++){
        int count =-1;
      for(int j=1; j<=2*i-1;j++){
          
       if(i==j || j<i){
         count= count +1; // 1 2 
          printf("%c", 'A' + count);

       }
  
      else if(count>0 && i+j>=n ){
              count= count -1; // 1  
          printf("%c",'A' +count);
      }
      else{
          printf("_");
      }
      }   printf("\n");
  }

return 0;
}