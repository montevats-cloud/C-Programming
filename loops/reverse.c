#include<stdio.h>
int main(){
    int a,sum;
    printf("enter number : "); 
    scanf("%d",&a);  
    sum=0;
    
    
   while (a!=0)
    { 
        sum=sum*10+a%10 ;
        a=a/10;
    }
    
     printf("sum of digit in given number is : %d",sum);  
    
    return 0;
}