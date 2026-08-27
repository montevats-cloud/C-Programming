#include<stdio.h>
int main(){
    int n,i;
    printf("enter number : "); 
    scanf("%d",&n);  
    int f,r,a;
    f=1;
    r=0;
    i=1;
     printf("%d ",f);
   while (i<=(n-1))
    {  a=f;
      f=f+r;
      r=a;
      
       printf("%d ",f);
      i++;
    }
    printf("%d ",f);
     
    return 0;
}