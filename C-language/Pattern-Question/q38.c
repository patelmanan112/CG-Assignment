#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=1;
    for(int i=n; i>0; i--){
        for(int j=0; j<n-i; j++){
       printf(" ");
        }
        for(int k=0; k<i; k++){
            printf("%d", count);
            count ++;
        }printf("\n");
        count =1;
  
        } 
   
    
    return 0;
}