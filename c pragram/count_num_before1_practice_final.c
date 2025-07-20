#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int a[1002];
  for (int i = 0; i < n; i++){
      scanf("%d", &a[i]);
     
  }
   int count = 0;
   for (int i = 0; i < n; i++){
       if(a[i] != 1){
           count +=1; 
       }
       else if (a[i] == 1){
           break;
       }
   }
   printf("%d", count);
  
  
    return 0;
}