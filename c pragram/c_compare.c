#include <stdio.h>
#include <string.h>
 
   int main() {
       
     char x[22];
    scanf("%s",x);
     char y[22];
     scanf("%s",y);
    // int cmp = strcmp(x,y);
    
      if (strcmp(x,y) == 0){
        printf("%s",y);
    }
     else if(strcmp(x,y) < 0){
    printf("%s",x);
        
    }
    else
    {
        printf("%s",y);
    }
      return 0;
   
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C