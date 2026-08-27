#include<stdio.h>
int main (){
    int n;
    printf("enter perentage : ");
    scanf("%d",&n);
    if(n>40){
        if(n>60){
            if(n>80){
                printf("grad A");
            }
            else
            printf("grad B");

        }
        else
        printf("grad c");
    }
    else
    printf("fail");
    return 0;
}