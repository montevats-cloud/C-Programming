#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    printf("enter no of row : ");
    scanf("%d",&r);
    printf("enter no of coloum : ");
    scanf("%d",&c);
    
    int a[r][c];
    int max=INT_MIN;
    int b;
    int d;
    printf("matrix 1\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        } 
    }
   
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);;
        } 
        printf("\n");
    }
   
    printf("matrix sum of 1 and 2\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          if(max<a[i][j]) {
            max=a[i][j];
            b=i;
            d=j;
          } 
        }
        printf("\n");
    }
    printf("%d ",b);
    printf("%d ",d);
    printf("%d ",max);
    return 0;
}