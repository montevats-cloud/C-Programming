#include<stdio.h>
int main(){
    int r,c;
    printf("enter no of row : ");
    scanf("%d",&r);
    printf("enter no of coloum : ");
    scanf("%d",&c);
    
    int a[r][c];
    int b[r][c];
    printf("matrix 1\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);;
        } 
    }
    printf("matrix 2\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);;
        } 
    }
    printf("matrix sum of 1 and 2\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}