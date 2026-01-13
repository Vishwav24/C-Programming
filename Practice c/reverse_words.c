#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],s[50];
    fgets(a,50,stdin);
    a[strcspn(a,"\n")]='\0';
    int l=strlen(a);
    int j,k=0;
    for(int i=l-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
            for(j=i+1;j<l;j++)
            {
            s[k]=a[j];
            k++;
            }
            s[k]=' ';
            k++;
            l=i;
        }
    }
    for(int i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            break;
        }
        s[k]=a[i];
        k++;
    }
    k++;
    s[k]='\0';
    printf("%s",s);
}