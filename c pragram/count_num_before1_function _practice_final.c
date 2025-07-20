#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count_before_one(int arr [], int size){
    int count = 0;
   for (int i = 0; i < size; i++){
       if(arr[i] != 1){
           count +=1; 
       }
       else if (arr[i] == 1){
           break;
       }
   }
   return count;
}

int main() {
  int n;
  scanf("%d", &n);
  int a[1002];
  for (int i = 0; i < n; i++){
      scanf("%d", &a[i]);
     }
  int result = count_before_one(a,n);
   printf("%d", result);
  
    return 0;
}