#include <stdio.h>

int main()
{
    char arr[1002];
    scanf("%s", arr);
    int len = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        len++;
    }
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j]) // Check if the characters do not match
        {
            printf("NO");
            return 0; // Exit if a mismatch is found
        }
    }
    // If no mismatches found, it's a palindrome
    printf("YES");
    return 0;
}
