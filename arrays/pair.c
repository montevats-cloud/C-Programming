#include <stdio.h>
int main(){
    int a[7]={1,2,3,4,5,6,7}; //5dibbe create
    int pairs =0;
    
    for(int i=0;i<=6;i++){
       for(int j=i+1;j<=6;j++){
        for(int k=j+1;k<=6;k++)
        if(a[i]+a[j]+a[k]==12){
            pairs++;
            printf("%d %d %d\n",a[i],a[j], a[k]);
        }
    }
    }
    printf("%d",pairs);
    return 0;
}