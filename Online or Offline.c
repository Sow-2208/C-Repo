#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d %d",&n,&m);
    a=n-(n*10/100);
    if(a<m)
    {
        printf("ONLINE");
    }
    else if(m<a)
    {
        printf("DINING");
    }
    else
    {
        printf("EITHER");
    }
}