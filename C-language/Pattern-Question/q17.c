#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){ // 1
for(int j=1;j<=n-i +1; j++){ // 5 
    printf("%d",j);
} printf("\n");
    }
    return 0;
}