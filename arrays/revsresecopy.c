#include <stdio.h>
#include <limits.h>
int main(){
    int a[7]={10,21,13,40,40,23,1}; 
    int b[7];
    int max=INT_MIN;;
    for(int i=0;i<7;i++){
      b[6-i]=a[i];
    }
    for(int i=0;i<7;i++){
      printf("%d ",b[i]);
    }
    
    
    return 0;
}