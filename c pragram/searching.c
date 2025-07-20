#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++)
        scanf("%d", &A[i]);
    int x;
       scanf("%d", &x);
    
    
     for(int i=0; i<N; i++)
     {
        if(A[i] ==x)
        {
           printf("%d ",i);
           return 0;
        }
    //  printf("%d ", A[i]);
     
     }
    printf("-1\n");
  return 0;
}
