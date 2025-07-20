#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    int q;
    scanf("%d", &q);
    long long  a[N];
    for (int i= 0; i < N ; i++){
        scanf("%lld", &a[i]);
    }
   while (q--){
        
     int L;
    scanf("%d", &L);
    int R;
    scanf("%d", &R);
    
    long long sum = 0;
    for (int j= L-1; j < R ; j++){
        
        sum +=a[j]; 
        
    }
    printf("%lld\n", sum);
    
    }
    
        return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y