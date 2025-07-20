
#include <stdio.h>
int freq[100005];
int main() {
    int N,M;
    scanf("%d %d", &N,&M);
    int a[N+5];
    for(int i = 0; i <N; i++){
        scanf("%d", &a[i]);
       
    }
    
    
    for(int i = 0; i < N; i++){
        
        freq[a[i]] += 1;
    }
    
    for(int i = 1; i <= M; i++){
    printf("%d\n", freq[i]);
    }
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V