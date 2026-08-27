#include<stdio.h>
int main (){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    if(n<0){
    n=n*-1;
    printf("the absoulte value is : %d",n);
    printf("hello");}
    
    return 0;
}