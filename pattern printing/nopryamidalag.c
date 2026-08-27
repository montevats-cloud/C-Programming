#include<stdio.h>
int main()
{   int n;
    printf("enter number : ");
     scanf("%d",&n);
     int nsp=1;
     int nst=n;
     
     for(int j=1;j<=2*n+1;j++){
           
        printf("%d",j);
     }
     printf("\n");
     for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
           
        printf("%d",a);
        a++;
    }
         for(int k=1;k<=nsp;k++){
            printf(" ");
         }
         
    
    for(int j=1;j<=nst;j++){
           
        printf("%d",a);
        a++;
    }
        nst--;
        nsp+=2;
        printf("\n");
     }
    return 0;
}