#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int co1=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            co1++;
        }
    }
    int co=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0 && i%2==0)
        {
            co++;
        }
    }
    if(co==co1) printf("True");
    else printf("False");
}