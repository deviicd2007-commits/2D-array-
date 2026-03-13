# include<stdio.h>
# include<string.h>
int main(){
    char str[100];
    int i=0,special=0;
    fgets(str,100,stdin);
    while(str[i] != '\0'){
        if(!((str[i]>='A' && str[i]<='Z')||
        (str[i]>='a' && str[i]<='z')||
        (str[i]>='0' && str[i]<='9'))){
          special++;
        }
        i++;
    }
    printf("%d",special);
    return 0;
}