#include<stdio.h>
#include<string.h>
int main()
{
    int g,c[50]={0};
    char a[50],b[50];
    fgets(a,50,stdin);
    a[strcspn(a,"\n")]='\0';
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<l;i++)
    {
        g=1;
        for(int j=i+1;j<l;j++)
        {
            if(b[j]!='\0')
        {
            if(a[i]==a[j])
            {
                g++;
                b[j]='\0';
            }
        }
    }
        c[i]=g;
    }
    for(int i=0;i<l;i++)
    {
    printf("%d",c[i]);
    }
}