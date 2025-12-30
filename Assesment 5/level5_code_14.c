#include<stdio.h>
int main()
{
    int  x,y,z,a=0,b,c=0,d,h=1,e;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(y=0;x>10;y++)
    {
        if(a==0)
        {
        z=x%10;
        x=x/10;
        a=1;
        }
        b=x%10;
        c=(c*10)+b;
        x=x/10;
    }
    for(int i=0;c!=0;i++)
    {
        b=c%10;
        d=(d*10)+b;
        c=c/10;
    }
    for(int j=y;j>=1;j--)
    {
        h=h*10;
    }
    e=((((z*h)+d)*10)+x);
    printf("%d",e);
}