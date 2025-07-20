#include <stdio.h>
int a[10000],b[10000];

int main() {
    int length1;
    scanf("%d", &length1);
    
    for( int i = 0; i<length1;i++){
        scanf("%d", &a[i]);
    }
    for( int i = 0; i<length1;i++){
        printf("%d ", a[i]);
    }
    int index, value;
    scanf("%d %d ", &index, &value);
    length1++;
    for( int i =length1-1; i>=index; i--){
        a[i+1] = a[i];
    }
    a[index]= value;
   
    for( int i = 0; i<length1;i++){
        printf("%d ", a[i]);
    }
    
    
    return 0;
}