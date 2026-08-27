#include<stdio.h>
int main (){
    int x1;
    printf("enter number x1 : ");
    scanf("%d",&x1);
    int y1;
    printf("enter number y1 : ");
    scanf("%d",&y1);
    int x2;
    printf("enter number x2 : ");
    scanf("%d",&x2);
    int y2;
    printf("enter number y2 : ");
    scanf("%d",&y2);
    int x3;
    printf("enter number x3 : ");
    scanf("%d",&x3);
    int y3;
    printf("enter number y3 : ");
    scanf("%d",&y3);
    if (x1-x2!=0 && x2-x3!=0 &&x1-x3!=0){

    if((y1-y2)/(x1-x2)==(y1-y3)/(x1-x3))       {
        printf("yes line ");
    }
    else
    printf("not line ");
}
else 
if(x1-x2==0 && x2-x3==0 &&x1-x3==0){
        printf("yes line gt ");
    }
    else
    printf("not line  gt12");

    return 0;
}