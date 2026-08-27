#include<stdio.h>
int main(){
    int r;
    printf("enter no of row : ");
    scanf("%d",&r);
    int sum=0;
    
    
    int a[r][r];
    int b[r][r];
    printf("matrix 1\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&a[i][j]);;
        } 
    }
    printf("matrix 2\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&b[i][j]);;
        } 
    }
    int c[r][r];
    printf("matrix sum of 1 and 2\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        
        c[i][j]=sum;    
        }
        
        
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d",c[i][j]);;
        } 
    }
    return 0;
}