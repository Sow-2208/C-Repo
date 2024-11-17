#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    scanf("%s",&s1);
    int len=strlen(s1);
    char s2[100];
    int i=len-1,j=0;
    while(i>=0)
    {
        s2[j]=s1[i];
        i--;
        j++;
    }
    s2[j]!='\0';
    int is_palindrome=1;
    for(int i=0;i<len;i++)
    {
        if(s1[i]!=s2[i])
        {
            is_palindrome=0;
            break;
        }
    }
    if(is_palindrome==1)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}