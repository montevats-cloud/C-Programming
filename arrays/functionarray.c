#include <stdio.h>
void function(int gh[]){
    gh[0]=3;
    return;
}
int main(){
    int a[5]={1,2,3,4,5}; //5dibbe create
    
    /*int product=1;
    for(int i=0;i<=4;i++){
       
        product=product*a[i];
    }
    printf("%d",product);*/
    printf("%d ",a[0]);
    function(a);
    printf("%d",a[0]);
    return 0;
}