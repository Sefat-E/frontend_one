#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[100001];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count += 1;
        }
    }
    printf("%d", count);

    return 0;
}

// /www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/count-me-2-2