#include<stdio.h>
int main()
{   int n;
    printf("enter number : ");
     scanf("%d",&n);
     int nst=1;
     int nsp=2;
     for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
           
        printf("  ");
        }
        for(int k=1;k<=nst;k++){
           
        printf("%d ",k);
        }
        int x=i;
        for(int k=1;k<=i-1;k++)
       { 
        x--;
        printf("%d ",x);
        
        
       }
    
        printf("\n");
        nst=nst+1;
        nsp=nsp+1;
     }
    return 0;//jfevnfdhgrehgewfhjgwrr
}