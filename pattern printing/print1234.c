#include<stdio.h>
int main()
{   int m,n;
    printf("enter row: ");
    
    scanf("%d",&m);
    printf("enter colum: ");
     scanf("%d",&n);
     for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
        printf("%d ",j);
    }
        printf("\n");
     }
    return 0;
}