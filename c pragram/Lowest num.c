#include <stdio.h>
#include <math.h>
 
int main() 
{
    int N;
    int p;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++)
        scanf("%d", &A[i]);
    
    int lowest_num = A[0];
    
      p = 0;
     for(int i=0; i<N; i++){   
           
         if(lowest_num > A[i])
         {  
            lowest_num = A[i];
             p = i;
            
                 
        }
         

            
         
          
      }
     printf("%d %d ", lowest_num, p+1 );
     return 0;
}