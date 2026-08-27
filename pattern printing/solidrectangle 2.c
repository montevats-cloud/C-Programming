#include<stdio.h>
int main()
{   int m,n;
    printf("enter row: ");
    
    scanf("%d",&m);
    printf("enter colum: ");
     scanf("%d",&n);
     for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
        printf("* ");
    }
        printf("\n");
     }
    return 0;
}