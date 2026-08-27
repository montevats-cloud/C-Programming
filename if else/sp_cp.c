#include<stdio.h>
int main (){
    int n,cp,sp;
    printf("enter cp : ");
    scanf("%d",&cp);
    printf("enter sp : ");
    scanf("%d",&sp);
    n=sp-cp;
    if(n<0){
     n=n*-1;
    printf("the loss is : %d",n);}
    else
    printf("the profit is : %d",n);

    return 0;
}