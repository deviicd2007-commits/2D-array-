#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, c, i;
    for(i = 1; i <= n; i++) {
        if(i == 1)
            printf("%d ", a);
        else if(i == 2)
            printf("%d ", b);
        else {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    fibonacci(N);
    return 0;
}