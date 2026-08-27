#include<stdio.h>
int factorial(int x){
    int n=1;
    for(int i=1;i<=x;i++)
      n=n*i;
      return n;
}
int p(int n,int r){
      int ncr=factorial(n)/factorial(n-r);
      return ncr;
}
int main(){  
    int n;
    printf("enter number : ");
    scanf("%d",&n); 
    int r;
    printf("enter number : ");
    scanf("%d",&r); 
    
      int ncr=p(n,r);
     printf("%d",ncr);
    return 0;
}
