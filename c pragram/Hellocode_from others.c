#include <stdio.h>
#include <string.h>

int main() {
    char str[100002];
    scanf("%s", str);

    int len = strlen(str);
    int a = -1, b = -1, c1 = -1, c2 = -1, d = -1;

    for (int i = 0; i < len; i++) {
        if (str[i] == 'h' && a == -1) a = i;
        else if (str[i] == 'e' && b == -1 && a != -1) b = i;
        else if (str[i] == 'l') {
            if (c1 == -1 && b != -1) c1 = i;
            else if (c1 != -1 && c2 == -1) c2 = i;
        }
        else if (str[i] == 'o' && c2 != -1) d = i;
    }

    if (a != -1 && b > a && c1 > b && c2 > c1 && d > c2) 
        printf("YES\n");
    else 
        printf("NO\n");

    return 0;
}
