#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int count ;
for(int i=1; i<=n; i++){
    for(int j=0; j<n; j++){
        count= (i+j)%2;
        printf("%d ",count);
   
    } printf("\n");
}
      return 0;
}