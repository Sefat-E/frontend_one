#include <stdio.h>
#include <string.h>
int main() {
  char str[100001];
  int f[26]= {0};
  fgets(str, sizeof(str), stdin);
  int length = strlen(str);
  for (int i = 0; i < length; i++ ){
     if (str[i] >= 'a' && str[i] <= 'z') {
         f[str[i] - 'a']++;
         
     }
  }
     for (int i = 0; i < 26; i++) {
     if (f[i] > 0){
         printf("%c: %d\n", 'a' + i, f[i]);
     }
  }
  
  
    return 0;
}