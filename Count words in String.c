#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",&str);
    int word=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            word++;
        }
    }
    printf("%d",word);
}