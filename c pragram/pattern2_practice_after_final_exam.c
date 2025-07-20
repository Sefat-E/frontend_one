#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
   int N;
   scanf("%d", &N);
   for( int i =1;i <= N;i++){
      for(int s = 1; s<=N-i; s++){
          printf(" ");
      }
      for(int j =i; j >=1; j--){
          printf("%d", j);
      }
      printf("\n");
  }
    return 0;

}
// https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/pattern-2-21-4/problem