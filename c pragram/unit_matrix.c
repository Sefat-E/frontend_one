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
    int element = a[0][0];
    
    int found = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ( i ==j){
            
               if(a[i][j] !=element){
                   found = 0;
                  break;
               }
            }
            else {
                if(a[i][j] != 0){
                   found = 0;
                  break;
               }
            }  
    }
    }
        if(found == 0){
            printf("YES");
        }
        else{
             printf("NO");
        }
    

    return 0;
}
