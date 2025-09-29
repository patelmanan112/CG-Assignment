#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count =0;
    for(int i=1; i<=n; i++){ // 1
for(int j=0;j<i ; j++){ // 5 
    printf("%c ", 'A'+count);
    count++;
} printf("\n");
    }
    return 0;
}