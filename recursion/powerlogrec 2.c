#include<stdio.h>
int power( int a,int b){
    
    
    
   if(b==0){
    return 1;

   }
   int x=power(a,b/2);
   if(b%2==0){
    
   return  x*x;
   }
   else{
    
   return  a*x*x;
}
}
int main(){
    int a;
    printf("enter number : ");
    scanf("%d",&a);
    int b;
    printf("enter number : ");
    scanf("%d",&b);
    int x= power (a,b);
      
    printf("%d",x);
    
    return 0;
}