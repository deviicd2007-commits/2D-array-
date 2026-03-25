# include<stdio.h>
int reverseNumber(int n){
    int rev =0,rem;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",reverseNumber(n));
    return 0;
}