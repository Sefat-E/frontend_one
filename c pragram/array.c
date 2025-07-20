#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++)
        scanf("%d", &A[i]);

    int positive_num = 1;
    int negative_num = 2;
     for(int i=0; i<N; i++)
     {
        if(A[i]>0)
        {
            A[i]= positive_num;
        }
        
        else if(A[i]<0 ){
             A[i]= negative_num;
        }
        
     printf("%d ", A[i]);
     
     }
    
 return 0;
}

   