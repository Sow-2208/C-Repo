#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int found=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(ar[i]==k)
        {
            found++;
            break;
        }
    }
    if(found==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}