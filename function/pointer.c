#include<stdio.h>
int main(){
   
    int a=5;
    int* x=&a;
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%d\n",*x);
    int b=5;
    printf("%p\n",&b);
    *x=7;// aki value change
    printf("%p\n",&a);
    printf("%d",a);
     return 0;
}