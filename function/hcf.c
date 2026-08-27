#include<stdio.h>
int minimum(int a,int b){
    
    if(b<a)
    return b;
    else
    return a;
}
int main()
{   int a;
    printf("enter number : ");
     scanf("%d",&a);
   int b;
    printf("enter number : ");
     scanf("%d",&b);
     int x;

     for(int i=1;i<=minimum(a,b);i++){
        if(a%i==0&&b%i==0)
x=i;
     }
    printf("hcf %d ",x);

     return 0;
}