#include<stdio.h>
void preInPost(int n){
    if(n==0){
    return ; 
}
    printf("%d",n);
     preInPost(n-1);
     printf("%d",n);
     preInPost(n-1);
     printf("%d",n);
     return;
}

int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        preInPost(i);
        printf("\n");
    }
    
    return 0;
}