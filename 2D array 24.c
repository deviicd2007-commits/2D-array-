#include <stdio.h>
int isPrime(int n){
    if(n <= 1)
        return 0;
         for(int i = 2; i <= n/2; i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
     for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
     for(int i = 0; i < r; i++){
        int valid = 1;
         for(int j = 0; j < c; j++){
            if(!isPrime(a[i][j])){
                valid = 0;
                break;
            }
        }
        if(valid)
            count++;
    }
    printf("%d", count);
    return 0;
}