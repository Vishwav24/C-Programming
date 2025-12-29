#include<stdio.h>
int main()
{
    int x,y,z=0,a=0,b=0,c=0,d=1,e,g,f;
    printf("Enter a number : ");
    scanf("%d",&x);
    f=x;
    g=x%10;
loop1:    if(x>10)
    {
    y=x%10;
    z=(z*10)+y;
    x=x/10;
    a=a+1;
    goto loop1;
    }
loop2:    if(z!=0)
    {
        y=z%10;
        b=(b*10)+y;
        z=z/10;
        goto loop2;
    }
loop3:    if(c<a)
    {
        d=(d*10);
        c=c+1;
        goto loop3;
    }
    if(g%2!=0)
    {
        e=(((x-1)*d)+(b));
        printf("%d",e);
    }
    else
    {
        printf("%d",f);
    }
}