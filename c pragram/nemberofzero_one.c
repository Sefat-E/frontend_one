#include <stdlib.h>

int main() {
     int N;
     scanf("%d", &N);
     
     
     int numberofZero = 0;
    //  int find_1 = 0;
    //  int find_0 = 0;
     int numberofOne = 0;
     int num;
    for(int i=1; i<=N; i++){
     scanf("%d", &num);
      if (num == 0){
         numberofZero++;
        }
      else if ( num ==1 ){
          numberofOne++;
        }
     }
        printf("%d %d ",numberofZero,numberofOne );
      
    
  return 0;
}