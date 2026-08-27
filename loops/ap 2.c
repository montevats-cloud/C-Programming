#include<stdio.h>
int main(){
    int i,n,d;
     printf("Enter first number : ");
    scanf("%d",&i);
    printf("Enter common differnce : ");
    scanf("%d",&d);
    printf("Enter number of digit : ");
    scanf("%d",&n);
    for(i=i;i<=d*n;i=i+d){
     
        printf("%d ",i);
    }
    return 0;
}