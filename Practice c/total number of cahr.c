#include<stdio.h>
#include<string.h>
int main()
{
    int g=1,h[50],k=0,add=0;
    char a[50];
    fgets(a,50,stdin);
    a[strcspn(a,"\n")]='\0';
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        g=1;
        if(a[i]!='\0')
        {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
                g++;
            }
        }
        h[k]=g;
        k++;
    }
    else
    {
        continue;
    }
    }
    for(int i=0;i<k;i++)
    {
    printf("%d",h[i]);
    }
    for(int i=0;i<k;i++)
    {
        add=add+h[i];
    }
    printf("%d",add);
}