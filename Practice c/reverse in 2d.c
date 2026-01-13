#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,c=0;
    char s[100][100],t[100];
    fgets(t,100,stdin);
    t[strcspn(t,"\n")]='\0';
    int l=strlen(t);
    for(int i=0;i<l;i++)
    {
        if(t[i]==' ')
        {
            s[a][c]='\0';
            a++;
            c=0;
        }
        if(t[i]!=' ')
        {
        s[a][c]=t[i];
        c++;
        }
        else{
            continue;
        }
    }
    for(int i=a;i>=0;i--)
    {
        printf("%s ",s[i]);
    }
}