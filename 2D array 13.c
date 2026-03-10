# include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    int i,j;
    int count=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++){
         int pal=1;
         for(j=0;j<c/2;j++){
             if(a[i][j]!=a[i][c-1-j]){
                 pal=0;
                 break;
             }
         }
         if(pal==1)
         count++;
     }
     printf("%d",count);
     return 0;
}
    
    