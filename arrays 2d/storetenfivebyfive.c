#include<stdio.h>
int main(){
    int r,c;
    printf("enter no of row : ");
    scanf("%d",&r);
    printf("enter no of coloum : ");
    scanf("%d",&c);
    
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=10;
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}