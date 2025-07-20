#include <stdio.h>
 int count_vowel(char s[],int index) {
     if(s[index] =='\0'){
         return 0;
     }
    char ch = s[index];
int vowel_letters = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
//  return is_vowel + count_vowels(s, index + 1);
 if(vowel_letters){
     return vowel_letters + count_vowel(s,index+1);
 }
 else {
     return count_vowel(s,index+1); 
 }
 } 
int main() {
  char s[201];
 fgets(s, sizeof(s),stdin);
 int vowel_count = count_vowel(s,0);
 printf("%d", vowel_count );
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I