#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    if(((a*2)+b)>((x*2)+y))
    printf("Messi");
    else if(((a*2)+b)<((x*2)+y))
    printf("Ronaldo");
    else if(((a*2)+b)==((x*2)+y))
    printf("Equal");
}