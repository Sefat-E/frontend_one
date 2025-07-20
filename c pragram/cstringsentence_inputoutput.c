#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch; 
    char str[8];
    char sentence [99];
    scanf("%c", &ch);
    scanf("7%[^.]s\ngetchar();", str);
    // scanf("%[^]s", sentence);
    fgets(sentence,99, stdin);
    
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s ", sentence);
    return 0;
}