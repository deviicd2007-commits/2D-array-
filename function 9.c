# include<stdio.h>
int checkPalindrome(int n){
    int original =n;
    int rev=0,rem;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev)
      return 1;
    else
      return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    if(checkPalindrome(n))
      printf("Palindrome");
    else
      printf("Not Palindrome");
    return 0;  
}