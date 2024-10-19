#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<=8 && x*y<=500)
    printf("YES");
    else
    printf("NO");
}