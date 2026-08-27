#include <stdio.h>
int main(){
    int a[5]={1,2,3,4,5}; //5dibbe create
    int sum=0;
    int differnce=0;
    
    for(int i=0;i<=4;i++){
       if(i%2==0)
        sum=sum+a[i];
        else
        differnce=differnce+a[i];
    }
    printf("%d",sum-differnce);
    return 0;
}