#include<stdio.h>
int main (){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    printf("%d is a divisble by 15",n);
    else
    printf("%d is a  not divisble by 15",n);
    return 0;
}