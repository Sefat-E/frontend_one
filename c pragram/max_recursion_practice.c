#include <stdio.h>
int a [1005];
int max_from_index (int j, int n){
    if(j == n -1){
        return a[j];
    }
int max_finally = max_from_index (j+1, n);
    if ( max_finally>a[j]){
        return max_finally;
    }
    else {
        return a[j]; ;
    }
}
int main() {
   int n;
   scanf("%d", &n);
   for(int i = 0; i<n; i++){
       scanf("%d", &a[i]);
   }
   
   printf("%d",max_from_index ( 0, n));
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K