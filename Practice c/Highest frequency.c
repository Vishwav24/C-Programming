#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b=0,c;
    char s[100],d;
    fgets(s,100,stdin);
    s[strcspn(s,"\n")]='\0';
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
        a=0;
        if(s[i]!='\0')
        {
        for(int j=i+1;j<len;j++)
        {
            if(s[i]==s[j])
            {
                s[j]='\0';
                a++;
            }
        }
        if(a>b)
        {
            b=a;
            d=s[i];
            break;
        }
        }
        }
              printf("%d",b);
        printf("%c",d);
}