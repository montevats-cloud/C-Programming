#include<stdio.h>
int main(){
    int i,n,a;
    for(i=2;i<=100;i++){ 
        a=0 ;  
    for(n=2;n<=i/2;n++){
        if(i%n==0){
            a=1;
            
        }
        
    }
    if(a==0)
    printf("%d \n",i);
 
    }
    return 0;
}