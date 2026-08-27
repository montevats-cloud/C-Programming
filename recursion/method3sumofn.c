#include<stdio.h>
int sum(int x){
    if(x==0)
    return 0;
    else
    return x+sum(x-1);
}
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    int alpha=sum(n);
    printf("sum : %d",alpha);
    return 0;
}