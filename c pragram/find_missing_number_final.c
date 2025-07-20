#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   int T;
    scanf("%d", &T);
    
    for( int i = 1; i <= T; i++){
    
    long long int man;
    scanf("%lld", &man);
    
    long long int a,b,c;
    scanf("%lld %lld %lld", &a,&b,&c);
    
    long long int multi, result;
    multi = a*b*c;
    
    if(man % multi == 0){
        result = man / multi;
        printf("%lld\n",result );
    }
    else 
    {
      printf("%d\n", -1);
    }
    }
    return 0;
}
// https://www.hackerrank.com/contests/b6-final-c/challenges/find-the-missing-number-11-3/problem