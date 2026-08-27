#include<stdio.h>
int fibbo(int a){
    if(a==1||a==2)
    return 1;
    else{
  
    return   fibbo(a-1) +fibbo(a-2) ;
    
}
}
int main(){
    int a;
    printf("enter number : ");
    scanf("%d",&a);
    
    //int power=fibbo(a-1);
    printf("fibbonus : %d",fibbo(a));
    return 0;
} 