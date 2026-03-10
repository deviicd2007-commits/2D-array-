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
    int sum[r];
    for(i=0;i<r;i++){
        sum[i]=0;
        for(j=0;j<c;j++){
            sum[i]+=a[i][j];
        }
    }
    int maxDiff=0;
    for(i=0;i<r;i++){
        for(j=i+1;j<r;j++){
            int diff=sum[i]-sum[j];
            if(diff<0)
            diff=-diff;
            if(diff>maxDiff)
            maxDiff=diff;
        }
    }
    printf("%d",maxDiff);
    return 0;
}