#include <stdio.h>

int armstrong(int n) {
    int temp = n, count = 0, rem, sum = 0, i;
    while(temp != 0) {
        count++;
        temp = temp / 10;
    }
    temp = n;
    while(temp != 0) {
        rem = temp % 10;
        int power = 1;
        for(i = 1; i <= count; i++) {
            power = power * rem;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    if(sum == n)
        return 1;
    else
        return 0;
}
int main() {
    int N;
    scanf("%d", &N);
    if(armstrong(N))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}