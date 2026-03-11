# include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int i,j;
    int minSum=999999;
    int index=-1;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        int sum=0;
        for(j=0;j<c;j++){
            sum=sum+a[i][j];
        }  
        if(sum!=0 && sum<minSum){
            minSum=sum;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
    
}