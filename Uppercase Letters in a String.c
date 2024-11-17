#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",&str);
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            count++;
        }
    }
    printf("%d",count);
}