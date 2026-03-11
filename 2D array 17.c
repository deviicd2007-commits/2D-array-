# include<stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int i,j;
    int count = 0;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++){
        int sum = 0;
        for(j = 0; j < c; j++){
            if(j != i){
                sum += a[i][j];
            }
        }
        if(a[i][j] > sum){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}