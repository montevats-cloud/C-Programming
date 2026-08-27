#include<stdio.h>
int main (){
    int a;
    printf("enter number a : ");
    scanf("%d",&a);
    int b;
    printf("enter number b : ");
    scanf("%d",&b);
    int c;
    printf("enter number c : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
        printf("%d is greatest",a);
        else 
        printf("%d is greatest",c);
     }
        else {
            if(b>c)
            printf("%d is greatest",b);
            else 
            printf("%d is greatest",c);
     }
    return 0;
}