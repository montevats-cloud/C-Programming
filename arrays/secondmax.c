#include <stdio.h>
#include <limits.h>
int main(){
    int a[7]={10,21,13,40,40,23,1}; //5dibbe create
    int smax=INT_MIN;
    int alpha;
   // int max=a[0];;
    int max=INT_MIN;;
    for(int i=0;i<7;i++){
       if(max<a[i]){
        smax=max;

        max=a[i];
       }
       else if(smax<a[i]&&max!=a[i])
       smax=a[i];
        
    }
    
    /*for(int i=0;i<7;i++){
       if(smax<a[i]&&max!=a[i])
       smax=a[i];
    }*/
    printf("%d",smax);
    return 0;
}