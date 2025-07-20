#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int found = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == x)
            {
                found = 1;
                break;
            }
        }
    }
    if (found == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S