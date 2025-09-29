#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int count=0; // 4 
for(int i=0;i<=n; i++){
    for(int j=0; j<=2*n -1;  j++){
        if(i+j>n && i+j <2*i +n){
            printf("%c ",  'A' + count);
            count++;
        }
        else{
            printf("  ");
        }
    } printf("\n");
    count=0;
}

    return 0;
}