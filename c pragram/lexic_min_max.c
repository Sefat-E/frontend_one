#include <stdio.h>
#include <string.h>

int main() {
   char A[1001],B[1001],C[1001];
   scanf("%s %s %s", A,B,C);
  char *mini = A;
  char *max = A;
   
   if(strcmp(max,B)<0){
       max = B;
       
   }
   if(strcmp(mini,B)>0){
       
       mini = B;
   }
   if(strcmp(B,C)<0){
       max = C;
       
   }
   if(strcmp(B,C)>0){
       max = B;
       
   }
   if(strcmp(max,C)<0){
       max = C;
      
   }
  if(strcmp(mini,C)>0){
       
       mini = C;
   }
   
  printf("%s\n%s", mini,max);
    return 0;
}