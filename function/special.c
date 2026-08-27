#include<stdio.h>
int minimum(int a,int b){
    int c=a;
    if(b<a)
    c=b;
    return c;
}
int main()
{   int n,min;
    printf("enter number : ");
     scanf("%d",&n);

     for(int i=1;i<=2*n-1;i++){
     for(int j=1;j<=2*n-1;j++){
        int a=i;
        int b=j;
        if(i>n) 
        a=2*n-i;
         if(j>n) 
        b=2*n-j;
        min=minimum(a,b);
        //if(a<b) 
       // min=a;
        // else
        // min=b;
        printf("%d",n+1-min);
     }
      printf("\n");
    }
     return 0;
}