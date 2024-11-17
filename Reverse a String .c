#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    scanf("%[^\n]s",&s1);
    int len=strlen(s1);
    char s2[100];
    int i=len-1,j=0;
    while(i>=0)
    {
        s2[j]=s1[i];
        i--;
        j++;
    }
    s2[j]='\0';
    printf("%s",s2);
}