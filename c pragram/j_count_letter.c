#include <stdio.h>
#include <string.h>
char str[10000005];
int main() {
    scanf("%s", str);
    int f[26] = {0};
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        char ch = str[i];
        int index = ch - 'a';
        f[index] += 1;
       
    }
    for (int i = 0; i < 26; i++){
          if(f[i] >0){
            printf("%c : %d\n", i + 'a',f[i]);
          }  
    }
        return 0;
}