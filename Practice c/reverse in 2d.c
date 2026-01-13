#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d",&a);
    char s[a][100];
    for(int i=0;i<a;i++)
    {
        fgets(s[i],100,stdin);
        s[i][strcspn(s[i],"\n")]='\0';
    }
    for(int i=a-1;i>=0;i--)
    {
        printf("%s ",s[i]);
    }
}