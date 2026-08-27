#include<stdio.h>
int main (){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    if(n%5==0 || n%2==0)
    printf("%d is a divisble by 2 or 5",n);
    else
    printf("%d is a  not divisble by 32or 5",n);
    return 0;
}