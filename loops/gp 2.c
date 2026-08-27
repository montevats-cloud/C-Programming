#include<stdio.h>
int main(){
    int a,n,r;
     printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter common differnce : ");
    scanf("%d",&r);
    printf("Enter number of digit : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     
        printf("%d ",a);
         a=a*r;
    }
    return 0;
}