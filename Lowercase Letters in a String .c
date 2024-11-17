#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",&str);
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            count++;
        }
    }
    printf("%d",count);
}