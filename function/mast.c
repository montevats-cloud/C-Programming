#include<stdio.h>
void england(){
    printf("wellcom england\n");//9
    return;//10
}
void pak(){
    printf("wellcom pak\n");//7
    england();// call england//8
    return;//11
}
void australia(){
    printf("wellcom australia\n");//5
    pak();//calling pak//6
    return;//12
}
void india(){
    printf("wellcom india\n");//3
    australia();//calling australia//4
      return;//13
    }
int main()
{   
    printf("hii bro\n");//1
     india();//call india//2
     return 0;//14
}