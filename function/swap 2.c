#include<stdio.h>
void swap(int a,int b){
    int n=a;
    a=b;
      b=n;
      return; 
}
int main(){
  int a;
    printf("enter number 1 : ");
     scanf("%d",&a); 
  int b;
    printf("enter number 2 : ");
     scanf("%d",&b);
      //int n=a;
      //a=b;
      //b=n; 
      a=a+b;
      b=a-b;
      a=a-b;
      swap(a,b);
     printf("enter number 2 :%d \n",b); 
     printf("enter number 1 :%d ",a); 
    return 0;
}