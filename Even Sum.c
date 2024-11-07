#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            sum=sum+A[i];
        }
    }
    printf("%d",sum);
}