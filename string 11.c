# include<stdio.h>
int main(){
    char str[100];
    int i=0,count=0;
    fgets(str,100,stdin);
    while(str[i] != '\0'){
        if(str[i]>= '0' && str[i]<='9'){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}