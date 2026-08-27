#include<stdio.h>
int main (){
    int x;
    printf("enter x: ");
    scanf("%d",&x);
    int y;
    printf("entery: ");
    scanf("%d",&y);
    if(y==0 && x==0)
    printf("lies on origin");
    else if(x==0)
     printf("lies on y axis");
     else if(y==0)
     printf("lies on xaxis");
    else 
     printf("lies on lies not lie x axis ,y axis,origin ");
    

    return 0;
}