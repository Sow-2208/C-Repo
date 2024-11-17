#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",&str);
    int vowel_count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        char vowel[]="aeiouAAEIOU";
        int is_vowel=0;
        for(int j=0;j<10;j++)
        {
            if(str[i]==vowel[j])
            {
                is_vowel=1;
                break;
            }
        }
        if(is_vowel==1)
        {
            vowel_count++;
        }
    }
    printf("%d",vowel_count);
}