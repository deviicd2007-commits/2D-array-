# include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int maxIndex=0;
    int maxSum=0;
    for(i=0;i<r;i++){
        maxSum+=a[i][0];
    }
    for(j=1;j<c;j++){
        int Sum=0;
        for(i=0;i<r;i++){
            Sum+=a[i][j];
        }
        if(Sum>maxSum){
            maxSum=Sum;
            maxIndex=j;
        }
    }
    printf("%d",maxIndex);
    return 0;
}