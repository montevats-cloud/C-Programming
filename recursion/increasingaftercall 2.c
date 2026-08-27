#include<stdio.h>
void increasing(int x){
   if(x!=0)//base case
   {
    
   increasing(x-1);//call
   printf("%d\n",x);//code
   return  ;
   }
}
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    increasing(n);//call
    return 0;
}