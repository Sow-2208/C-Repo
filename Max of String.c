#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",&str);
    int max=str[0];
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>max)
        max=str[i];
    }
    printf("%c",max);
}