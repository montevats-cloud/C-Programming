#include <stdio.h>
int main(){
    int marks[3]; //5dibbe create
    
    for(int i=0;i<=2;i++){
        printf("marks[%d],rollno= ",i);
        scanf("%d",&marks[i] );
    }
    for(int i=0;i<=2;i++){
        printf("%p\n",&marks[i]);
        
    }
    return 0;
}