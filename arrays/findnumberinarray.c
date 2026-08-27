#include <stdio.h>
#include <stdbool.h>

int main(){
    int a[7]={10,21,13,40,40,23,1}; 
    int x;
    printf("enter number :");
    scanf("%d",&x);
     bool flag=false;
   for(int i=0;i<7;i++){
    if(x==a[i]){
        printf("%d",i);
        flag =true;
    }
    
    }
   if(flag){
    printf("hii");
   }
   else printf("hattt");
    
    
    return 0;
}