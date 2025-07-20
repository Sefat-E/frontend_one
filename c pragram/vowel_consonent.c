#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char ch;
     
     printf("Enter a character: ");
     scanf("%c", &ch);
     char vowel = 'a';'e';'i';'o';'u';
     if(ch == vowel) {
          printf("Vowel\n");
          }
     else         {
     
         printf("Consonant\n");
     }

return 0;
}