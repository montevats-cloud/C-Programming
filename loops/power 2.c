#include<stdio.h>
int main(){
    int a,i;
    i=1;
    printf("number : "); 
    scanf("%d",&a);  
    int b,p;
    p=1;
     printf("raise to power : "); 
    scanf("%d",&b);  
      
     
   while (i<=b)
    { p=p* a;
      
        printf("%d power of 2 is %d\n ",i,p);
          i++; 
    }
   printf("%d ",p); 
    return 0;
}