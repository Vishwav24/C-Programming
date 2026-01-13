#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][50];
    for(int i=0;i<5;i++)
    {
        fgets(a[i],50,stdin);
        a[i][strcspn(a[i],"\n")]='\0';
    }
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
        {
            printf("%s",a[i]);
        }
    }
}