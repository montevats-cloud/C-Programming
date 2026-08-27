#include<stdio.h>
int main(){
    int a,sum,n;
    printf("enter number : "); 
    scanf("%d",&a);  
    sum=0;
    
    
   while (a!=0)
    {  
        
        n=a%10;
        sum=sum+n ;
        a=a/10;
        

    }
     printf("sum of digit in given number is : %d",sum);  
    
    return 0;
}