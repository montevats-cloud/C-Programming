#include <stdio.h>
int main(){
    int a[5]; //5dibbe create
    //arr[0]=400;
     //float arr[3]={1.2,1.3,1};
    //printf("%f",arr[0]);
    //int a[3];
    //printf("enter a[0]");
    //scanf("%d",&a[0]);
    //printf("enter a[1]");
    //scanf("%d",&a[1]);
    //printf("enter a[2]");
    //scanf("%d",&a[2]);
    //printf("%d,%d,%d",a[0],a[1],a[2]);
    for(int i=0;i<=4;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    return 0;
}