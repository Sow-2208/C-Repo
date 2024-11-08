#include<stdio.h>
int main()
{
    int a,b,m;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        m=a*i;
        if(m%b==0)
        {
            printf("%d",m);
            break;
        }
    }
}