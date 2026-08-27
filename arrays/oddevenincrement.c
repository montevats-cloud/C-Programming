#include <stdio.h>
int main(){
    int a[5]={1,2,3,4,5}; //5dibbe create
    
    
    for(int i=0;i<=4;i++){
        printf("%d  ",a[i]);
       if(i%2==0)a[i]=a[i]+10;
       else a[i]=a[i]*2 ;
       printf("%d",a[i]);
    }
    
    return 0;
}