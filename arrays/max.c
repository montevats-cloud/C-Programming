#include <stdio.h>
#include <limits.h>
int main(){
    int a[7]={-100,-21,-13,-40,-51,-23,-101}; //5dibbe create
    
   // int max=a[0];;
    int max=INT_MIN;;
    for(int i=0;i<7;i++){
       if(max<a[i])
        max=a[i];
    }
    printf("%d",max);
    return 0;
}