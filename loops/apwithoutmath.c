#include<stdio.h>
int main(){
    int a,n,d;
     printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter common differnce : ");
    scanf("%d",&d);
    printf("Enter number of digit : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     
        printf("%d ",a);
         a=a+d;
    }
    return 0;
}