#include<stdio.h>
int main(){
    int i,n,a;
     printf("Enter number : ");
    scanf("%d",&n);
    a=0;
    
    for( i=2 ;i<=n-1;i=i+1){    
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1 || n<=0)
    printf("not prime not composite");
    else

    if(a==0)
    printf("prime number");
    else
    printf("not prime but composite");
    
    return 0;
}