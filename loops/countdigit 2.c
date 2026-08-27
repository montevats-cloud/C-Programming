#include<stdio.h>
int main(){
    int a,count;
    printf("enter number : "); 
    scanf("%d",&a);   
    for(count=0;a!=0;count++){
        
      a=a/10;  
    }
     printf("number of digit in given number is : %d",count);  
    
     
    return 0;
}