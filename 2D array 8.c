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
    int maxSum=0;
    for(i=0;i<r-1;i++){
        for(j=0;j<c-1;j++){
            int sum=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
            if(i==0&&j==0)
            maxSum=sum;
            if(sum>maxSum)
            maxSum=sum;
        }
    }
    printf("%d",maxSum);
    return 0;
}