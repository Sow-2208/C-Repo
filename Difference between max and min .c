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
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    int min=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
        }
    }
    int diff=max-min;
    printf("%d",diff);
}