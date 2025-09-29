#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int count=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n +i-1; j++){
       if(count<10){
             if(i+j<=n){
                printf(" ");
              
            }
            else{
                 printf("  ");
                printf("%d",count);
               
                count++;
            }
       }
       else{
             if(i+j<=n){
                printf(" ");
              
            }
            else{
                printf("%d",count);
                printf(" ");
                count++;
            }
       }
        } printf("\n");
    }
    return 0;
}