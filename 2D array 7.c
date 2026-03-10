# include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int i,j,k;
    int count=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            int isRowMin=1;
            int isColMax=1;
            for(k=0;k<c;k++){
                if(a[i][k]<a[i][j]){
                    isRowMin=0;
                    break;
                }
            }
            for(k=0;k<r;k++){
                if(a[k][j]>a[i][j]){
                    isColMax=0;
                    break;
                }
            }
            if(isRowMin&&isColMax){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
    
}
