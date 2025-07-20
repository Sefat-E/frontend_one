#include <stdio.h>
 
   int main() {
    char A[12];
    scanf("%s", A);
    char B[12];
    scanf("%s", B);
    char concat[30];
    int i = 0; int j = 0;
    int n = 0; 
    for(int i = 0; A[i] != '\0'; i++)
     {
      n++;
      }
      int m = 0;
    for(int i = 0; B[i] != '\0'; i++)
     {
      m++;
      }
      printf("%d %d\n", n,m);
      while(A[i] !='\0'){
          concat[j] = A[i];
          i++;
          j++;
      }
      i=0;
       while(B[i] !='\0'){
          concat[j] = B[i];
          i++;
          j++;
      }
    
      concat[j] = '\0';
      printf("%s\n", concat);
       
      int first_S_A = A[0];
      int second_S_B= B[0];
                A[0]= second_S_B;
                B[0] = first_S_A;
    // char temp = A[0];
    // A[0] = B[0];
    // B[0] = temp;
   
    

    printf("%s %s\n", A, B);
      return 0;
   
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D