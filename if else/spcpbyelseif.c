#include<stdio.h>
int main (){
    int n,cp,sp;
    printf("enter cp : ");
    scanf("%d",&cp);
    printf("enter sp : ");
    scanf("%d",&sp);
    
    if(sp-cp <0){
     
    printf("the loss is : %d",cp-sp);}
    else if(sp-cp>0)
    printf("the profit is : %d",sp-cp);
    else
    printf("no profit no loss");

    return 0;
}