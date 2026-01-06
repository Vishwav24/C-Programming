#include<stdio.h>
int function(int *f,int );
int main()
{
    int *p,b;
    scanf("%d",&b);
    int a[b];
    for(int i=0;i<b;i++)
    {
         scanf("%d",&a[i]);
    }
    p=a;
    function(p,b);
}
int function(int *f,int b )
{
    for(int i=0;i<b;i++)
    {
    *f=*f+1;
    f++;
    }
    f=f-b;
    for(int i=0;i<b;i++)
    {
    printf("%d",f[i]);
    }
}