#include<stdio.h>
void swap(int* x,int* y){
    int temp;//*x=a *y=b
    temp=*x;//a=get b
    *x=*y;
    *y=temp;
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
      
      swap(&a,&b);
      printf("enter number 1 :%d ",a); 
    
     printf("enter number 2 :%d \n",b); 
     
    return 0;
}