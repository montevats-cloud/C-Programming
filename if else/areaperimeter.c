#include<stdio.h>
int main (){
    int l,b;
    
    printf("enter lenght : ");
    scanf("%d",&l);
    printf("enter breadth : ");
    scanf("%d",&b);
    int a=l*b;
   int c=2*(l+b);
    if(a<c)
    printf("area is less tha perimeter");
    if(a == c)
    printf("area is equal tha perimeter");
    if(a>c)
    printf("area is greater tha perimeter");
    return 0;
}