#include <stdio.h>
void reverse(int abcd[]){
    int i=0;
    int j=6;
    while(i<j){
        int temp=abcd[i];
        abcd[i]=abcd[j];
       abcd[j]=temp;
       i++;
       j--; 
    }
    return ;
}  
int main(){
    int a[7]={10,21,13,40,40,23,1}; 
    reverse(a);
   
   for(int i=0;i<7;i++){
    printf("%d ",a[i]);
   }
    
    
    return 0;
}