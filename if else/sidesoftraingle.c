#include<stdio.h>
int main (){
    int a;
    printf("enter number a : ");
    scanf("%d",&a);
    int b;
    printf("enter number b : ");
    scanf("%d",&b);
    int c;
    printf("enter number c : ");
    scanf("%d",&c);
    
    if(a+b>c && b+c>a && c+a>b)
    printf("valid traingle");
    else
     printf("not valid traingle");
    
    
    return 0;
}