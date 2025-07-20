#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int T;
   scanf("%d", &T);
   getchar();
   
  for (int j = 1; j<=T; j++){
  char str[100001];
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0'; 
  int length = strlen(str);
  int  count_s = 0, count_b = 0, count_num = 0;
  
   for (int i = 0; i<length; i++){
    if(str[i] >= 'a' && str[i] <= 'z'){
       count_s +=1;
   } 
   if(str[i] >= 'A' && str[i] <= 'Z'){
       count_b +=1;
   } 
   
   if(str[i] >= '0' && str[i] <= '9'){
       count_num +=1;
   }
}
   printf("%d %d %d\n",count_b,count_s,count_num);
  }   
    return 0;
}