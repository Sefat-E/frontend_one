#include <stdio.h>
int a[100000],sum;
void goToIndex(int i, int n){
    if(i==n){
        return;
    }
    sum += a[i];
    goToIndex(i+1, n);
    
}
int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    sum = 0;
    goToIndex(0, n);
    printf("%d\n", sum);
   }
//    #include <stdio.h>
// int a[100000];
//    void int getSum(int i, int n){
//     if(i==n){
//         return 0;
//     }
//     return a[i] + getSum(i+1,n);
    
// }
// int main() {
//     int n;
//     scanf("%d", &n);
    
//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     int ret = getSum(0,n);
//     printf("%d\n", ret);
//    }