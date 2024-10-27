#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0&&a%7==0)
    printf("Alice");
    else if(a%2==1&&a%9==0)
    printf("Bob");
    else
    printf("Charlie");
}