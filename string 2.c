# include<stdio.h>
int main(){
    char str[100];
    int i=0;
    scanf("%s",&str);
     if(str[i]>='A' && str[i]<='Z'){
         printf("Valid\n");
     }
     else{
         printf("Invalid");
     }
     return 0;
}