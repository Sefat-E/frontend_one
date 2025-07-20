#include <stdio.h>

void monument(int x, int N) {
    if (x > N) {
        return;
    }
    printf("%d ", x);
    monument(x + 1, N);
    if (x > 1) {
        printf("%d ", x - 1);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        monument(1, N);
        printf("\n");  // Print a newline after each test case
    }
    return 0;
}
