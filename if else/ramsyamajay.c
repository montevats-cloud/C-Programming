#include<stdio.h>
int main (){
    int ram;
    printf("enter age of ram : ");
    scanf("%d",&ram);
    int syam;
    printf("enter age of syam: ");
    scanf("%d",&syam);
    int ajay;
    printf("enter age of ajay : ");
    scanf("%d",&ajay);

    if(syam>ram&& ajay>ram)
    printf("ram is youngest");
    if(ram>syam && ajay>syam)
    printf("syam is youngest");
    if(syam>ajay && ram>ajay)
    printf("syam is youngest");
    
    return 0;
}