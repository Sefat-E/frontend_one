#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even() {
    int N;
    scanf("%d", &N); 
    int A[N];  
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
      
        if (A[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("%d %d\n", even_count, odd_count);
}

int main() {
    odd_even();
    return 0;
}
// https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/even-and-odd-8-2