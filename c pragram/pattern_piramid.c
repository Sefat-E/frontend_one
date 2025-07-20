#include <stdio.h>
int main() {
   int N;
   int k;
   scanf("%d", &N);
   for( int i =1; k =1, i <= N; i++, k+=2){
    
       for(int j = 1; j<=N-i; j++){
           printf(" ");
       }
       for(int j =1; j<=k; j++){
           printf(" *");
       }
       printf("\n");
   } 
   for( int i =N;i>=1;i--){
       for(int s = N-i; s>=1; s--){
           printf(" ");
       }
       for(int j =i; j>=1; j--){
           printf(" *");
       }
       printf("\n");
   }
    return 0;
}