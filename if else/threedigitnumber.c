#include<stdio.h>
int main (){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    if(n>99&&n<1000)
    printf("%d is a three digit number",n);
    else
    printf("%d is not a three digit nuber",n);
    return 0;
}