#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int count =0;
for(int i=1; i<=n ; i++){
    for(int j=1; j<=n; j++){
      if(j==1 || j==n){
          printf("*", j);
      }
      else if (i==1 || i==n){
          printf("*");
      }
       else {
           printf(" ");
       }
    } printf("\n");
}
      return 0;
}