#include<stdio.h>
int main (){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    //tenary operater
    //exp1?exp2:exp
    n%2==0?printf("%d is a even number",n):printf("%d is a odd number",n);
    //if(n%2==0)
    //printf("%d is a even number",n);
    //else
    //printf("%d is a odd number",n);
    return 0;
}