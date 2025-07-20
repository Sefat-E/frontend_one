#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
 
    for (int i = 0; i < r; i++)
    {
        // for (int j = 0; j < c; j++)
        
            int temp = a[i][0];
             a[i][0] = a[i][c-1];
             a[i][c-1] = temp;
             
            //  printf("%d ", a[i][j]);
             
        
        // printf("\n");
    }
     for (int j = 0; j < c; j++)
    {
         int temp = a[0][j];
             a[0][j] = a[r-1][j];
             a[r-1][j] = temp;      
            //  printf("%d ", a[i][j]);
            //  printf("\n");
    }
          for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
             printf("%d ", a[i][j]);
            
        }
         printf("\n");
    }   
        
        // printf("\n");
    
    return 0;
}
// https://www.hackerrank.com/contests/b6-final-c/challenges/swap-in-matrix/submissions/code/1385135328