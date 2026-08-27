#include<stdio.h>
int factorial(int x){
    int n=1;
    for(int i=1;i<=x;i++)
      n=n*i;
      return n;
}
int combination(int n,int r){
      int ncr=factorial(n)/(factorial(r)*factorial(n-r));
      return ncr;
}
int main(){  
    int n;
    printf("enter number : ");
    scanf("%d",&n); 
    for(int i=0;i<=n;i++){ 
        
        for(int j=0;j<=i;j++){
            
            int p=combination(i,j) ;
           
            printf("%d ",p);
        }
               printf("\n");
    }
    
      
    return 0;
}
