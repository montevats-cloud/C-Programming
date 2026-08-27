#include<stdio.h>
void decreasing(int x){
   if(x!=0){
   
   printf("%d\n",x);
   decreasing(x-1);
   return  ;
   }
}
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}