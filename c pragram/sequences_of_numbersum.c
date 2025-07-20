#include <stdio.h>

int main() {
   int N,M;
    while(1){
        scanf("%d %d", &N, &M);
         int sum = 0;
       if( N>0 && M>0 && N<=M){
           for( int i = N;i<=M;i++){
            printf("%d ", i);
               sum = sum+i;
           }
       }
        else if( N>0 && M>0 && N>=M){
           for( int i = M;i<=N;i++){
            printf("%d ", i);
               sum = sum+i;
           }
         }
        else if(N<=0 || M<=0){
          break;
        }
           
      printf("sum =%d\n", sum);
    }
    return 0;
}