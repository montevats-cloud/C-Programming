#include<stdio.h>
int main(){
    int i,n;
     printf("Enter number : ");
    scanf("%d",&n);
    
    for( i=n ;i<=n*10;i=i+n){
     
        printf("%d ",i);
    }
    return 0;
}