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
    
    if(a>b && a>c)
    printf("%d is a greatest number",a);
    if(b>a && b>c)
    printf("%d is a greatest number",b);
    if(c>b && c>a)
    printf("%d is a greatest number",c);
    
    return 0;
}