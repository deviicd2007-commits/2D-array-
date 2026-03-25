# include<stdio.h>
int cheakLeap(int year){
    if((year%400==0)||(year%4==0&&year%100!=0))
     return 1;
    else
     return 0;
}
int main(){
    int year;
    scanf("%d",&year);
    if(cheakLeap(year))
      printf("Leap year");
    else
      printf("Not Leap year");
      return 0;
}