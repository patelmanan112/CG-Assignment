#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<=n; i++){ // 1
for(int j=0;j<n-i; j++){ // 5 
    printf("*");
} printf("\n");
    }
    return 0;
}