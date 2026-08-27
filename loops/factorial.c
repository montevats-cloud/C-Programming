#include<stdio.h>
int main(){
    int n,i,r;
    printf("enter number : "); 
    scanf("%d",&n);  
    r=1;
    i=1;
   while (i<=n)
    { 
        r=r*i;
        
     printf("factorial is %d : %d\n",i,r);  
    
    
        i++;
    }
    
     
    
    return 0;
}