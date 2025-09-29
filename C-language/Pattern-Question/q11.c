#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =1;
for(int i=1; i<=n; i++){
    for(int j=1;  j<=n;  j++){
  if(i+j >5){
    printf("%d ",count);
    count++;
  }
    else{
        printf(" ");
    }
    }  
  
   count=1;
    printf("\n");
}
return 0;
}