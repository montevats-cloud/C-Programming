#include<stdio.h>
int main(){
    int r,c;
    printf("enter no of row : ");
    scanf("%d",&r);
    printf("enter no of coloum : ");
    scanf("%d",&c);
    //int arr[2][2]={{1,2},{3,4}};
    //arr[0][0]=10;
    //arr[0][1]=11;
    //arr[1][0]=12;
    //arr[1][1]=13;
    //arr[2][0]=14;
    //arr[2][1]=15;
    int arr[3][3];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
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