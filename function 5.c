#include <stdio.h>
int digitSum(int n) {
    int sum = 0;
     while (n > 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}
int main() {
    int N;
    scanf("%d", &N);
    int result = digitSum(N);
    printf("%d", result);
    return 0;
}