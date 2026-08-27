#include<stdio.h>
int main()
{   int n,m;
    printf("enter number : ");
     scanf("%d",&n);
     int a=1;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
       //     if(i%2==0){
        ////    if(j%2!=0)
       //    printf("%d",0);
      //     else
      //     printf("%d",1); 
       //  }
       //    else
      //     if(j%2==0)
       //    printf("%d",0);
       //    else
       //    printf("%d",1); 
          if((i+j)%2==0)
              printf("%d",1);
            else  
                printf("%d",0);
        }
        printf("\n");
     }
    return 0;
}