#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(pow(2,n)>pow(n,2))
    printf("Yes");
    else
    printf("No");
}