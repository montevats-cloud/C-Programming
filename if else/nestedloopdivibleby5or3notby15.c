#include<stdio.h>
int main (){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    if(n%15!=0)
    printf("%d is a divisble by 3 or 5 not by 15",n);
    else
    printf("%d is a  divisble by 15",n);
    else 
    printf("%d not divisble by 3 or 5",n);
    return 0;
}