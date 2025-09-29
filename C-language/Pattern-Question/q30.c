// #include <stdio.h>// int main(){
//     int n;
//     scanf("%d",&n);
//     int count =0;
//     for(int i=0; i<n; i++){  // 0 
//         for(int j=0; j<n-i ; j++){ // 0 
//             printf(" ");
//         }
//         for(int k=0; k<2*i-1; k++){ // 0 X 1 
//             printf("%c",'A'+count);
//             count++;
//         }
//         for(int v=0; v<n; v++){
            
//         }
//         printf("\n");
//         count=0;
        
//     }
//     for(int l=0; l<=n; l++){
//         for(int m=0; m<l; m++){
//             printf(" ");
//         }
//         for(int p=0; p<2*(n-l)-1; p++){
//             printf("%c",'A'+count);
//             count++;
//         } printf("\n");
//         count =0;
//     }
//     return 0;
// }


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
   for(int i=1; i<2*n; i++){
           int count =65;
       for(int j=1 ; j<2*n; j++){
       
           if(i+j<=n || i-j >=n || j-i >=n || i+j>=3*n){
               printf(" ");
           }
           else if(j<n){
               printf("%c", count++);
             
           }
           else{
             
               printf("%c",count--);
           }
       }printf("\n");
   }

    return 0;
 return 0;
}