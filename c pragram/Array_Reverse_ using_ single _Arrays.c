#include <stdio.h>
int a[10000],b[10000];

int main() {
    int length1;
    scanf("%d", &length1);
    // printf("%d ", length1);
    
    for( int i = 0; i<length1;i++){
        scanf("%d", &a[i]);
    }
    
    
    
    for(int i = 0, j = length1 - 1; i <= j; i++,j--){
        
           int temp = a[i];
           a[i] = a[j];
           a[j] = temp;
    }
    
    // for(int i = 0, j = length1 - 1;i < length1; i++,j--){
        
    //          a[i] = b[i];
    // }
    for( int i = 0; i<length1;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    // for( int i = 0; i<length1;i++){
    //     printf("%d ", b[i]);
    // }
    
    return 0;
}