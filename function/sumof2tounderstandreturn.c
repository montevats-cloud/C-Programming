#include<stdio.h>
int add(int x,int y)//te alag dibbe ha
{
    return x+y;
}
int main(){
  int a;
  printf("enter first number :"); 
  scanf("%d",&a);
  int b;
  printf("enter second number :"); 
  scanf("%d",&b);
  int sum=add(a,b);//pass by value
  printf("%d",sum);
  return 0;
}