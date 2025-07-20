#include <stdio.h>
 
   int main() {
    char str[100];
    scanf("%s", str);
    
    int n = 0;
    for(int i = 0; str[i] != '\0'; i++)
     {
      n++;
      }
      
    for(int i = 0, j = n-1; i<= n-1; i++,j--){
       
        if ( str[i] != str[j] ) {
           printf("NO");
           return 0;
             }
        
    }
              
          printf("YES");
    
    return 0;
}