#include <stdio.h>
int main(){
    int marks[10]; //5dibbe create
    
    for(int i=0;i<=9;i++){
        printf("marks[%d],rollno= ",i);
        scanf("%d",&marks[i] );
    }
    for(int i=0;i<=9;i++){
        if(marks[i]<35)
        printf("marks[%d]= %d\n",i,marks[i]);
        
    }
    return 0;
}