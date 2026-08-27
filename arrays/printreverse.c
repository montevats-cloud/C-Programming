#include <stdio.h>
int main(){
    int a[5]; //5dibbe create
    
    for(int i=0;i<=4;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=4;i++){
        printf("a[%d]= %d\n",4-i,a[4-i]);
        
    }
    return 0;
}