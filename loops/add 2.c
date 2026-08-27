#include<stdio.h>
int main(){
    int a,sum,r;
    printf("enter number : "); 
    scanf("%d",&a);  
    sum=0;
    r=a;
    
   while (a!=0)
    { 
        sum=sum*10+a%10 ;
        a=a/10;
    }
    r=r+sum;
     printf("sum of digit in given number is : %d",r);  
    
    return 0;
}