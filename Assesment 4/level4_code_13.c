#include<stdio.h>
int main()
{
    int x,y,z=0,a,b=1,count=0,c,d=1,e=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
loop:    if(x>10)
    {
        a=x%10;
        z=(z*10)+a;
        x=x/10;
        count=count+1;
        goto loop;
    }
    loop3:    if(z!=0)
    {
        a=z%10;
        e=(e*10)+a;
        z=z/10;
        goto loop3;
    }
    printf("%d\n",x);
loop2:    if(b<=count)
    {
        d=d*10;
        b=b+1;
        goto loop2;
    }
    printf("%d\n",d);
    c=(((((d)*y)+e)*10)+x);
    printf("%d",c);
}