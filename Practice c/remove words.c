#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    fgets(s,50,stdin);
    s[strcspn(s,"\n")]='\0';
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if((s[i]>='a'&&s[i]<='z')||((s[i]>='A'&&s[i]<='Z')))
        {
            continue;
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}