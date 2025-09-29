#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
for(int i=1; i<=n; i++){ // 1
    for(int j=1;  j<=n;  j++){  // 1 2 
     if(i+j >5){
    printf("%c",'A' +count);
    count++;
  }
    else{
        printf(" ");
    }
    }  
    printf("\n");
   count=0;
    
    }  
return 0;
}