#include<stdio.h>
int sum(int x){
   if(x==0)//base case
   return x;
    int a=x;
    a=a+sum(x-1);//call
  
   return a ;
   
}
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int alpha=sum(n);
    printf("%d",alpha);
    return 0;
}