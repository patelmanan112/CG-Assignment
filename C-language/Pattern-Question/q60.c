#include <stdio.h>

int main() {
 int n;
 scanf("%d",&n);
 for(int i=1; i<=n ; i++){
     for(int j=1; j<=n; j++){
       if(i*j<10){
             printf("%d ",2*(i*j));
             printf(" ");
       }
       else{
             printf("%d ",i*j);
       }
     }printf("\n");
 }

    return 0;
}