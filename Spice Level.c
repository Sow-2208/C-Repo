#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<4)
    printf("MILD");
    else if(x>=4 && x<7)
    printf("MEDIUM");
    else if(x>=7)
    printf("HOT");
}