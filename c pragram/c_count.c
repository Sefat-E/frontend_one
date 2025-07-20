#include <stdio.h>
#include <string.h>
 
   int main() {
       
    char x[1000000];
    scanf("%s",x);
      int num = 0;
      int sum = 0;
      int length = strlen(x);
      for(int i = 0; i<length; i++){
          int digit = x[i] - '0';
        //   num = num * 10 + digit;
          sum = sum + digit;
      }
      printf("%d\n", sum);
    
      return 0;
   
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E