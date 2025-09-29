// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i ; j++){
//             printf(" ");
//         }
//         for(int k=0; k<2*i-1; k++){
//             printf("*");
//         } printf("\n");
//     }
//     for(int l=0; l<=n; l++){
//         for(int m=0; m<l; m++){
//             printf(" ");
//         }
//         for(int p=0; p<2*(n-l)-1; p++){
//             printf("*");
//         } printf("\n");
//     }
//     return 0;


// #include <stdio.h>

// int main() {
//  int n; 
//  scanf("%d",&n);
//  for(int i=1; i<=2*n-1; i++){
//      for(int j=1; j<=2*n-1; j++){
//          if(i+j>=n+1&& i+j<=n+2*i -1 && i+j<=3*n -1  && ( i+j!=n+2*j)){
//              printf("*");
//          }
//          else{
//              printf(" ");
//          }
//      }printf("\n");
//  }

//   return 0;
// }



#include <stdio.h>

int main() {
 int n; 
 scanf("%d",&n);
 for(int i=1; i<=2*n-1; i++){
     for(int j=1; j<=2*n-1; j++){
         if(i+j>=n+1&&  i-j <=n-1  && i+j<=3*n -1  && i+j<=n +2*i -1){
             printf("*");
       }
         else{
             printf(" ");
         }
     }printf("\n");
 }

  return 0;
}