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
    int maxProduct=1;
    int product=1;
    for(j=0;j<c;j++){
        maxProduct*=a[0][j];
    }
    for(i=1;i<r;i++){
        for(j=0;j<c;j++){
            product*=a[i][j];
        }
        if(product>maxProduct){
            maxProduct=product;
            maxIndex=i;
        }
    }
    printf("%d",maxIndex);
    return 0;
}  