# include<stdio.h>
int main(){
    char str[100];
    int i=0,count=0;
    scanf("%s",&str);
    while(str[i]!='\0'){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
        str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}