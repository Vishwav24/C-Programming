#include<stdio.h>
int main()
{
    int x=11,y,a=0;
loop:    if(x<100)
    {
        if(x%2!=0)
        {
        y=x/10;
        if(y==7)
        {
            a=a+x;
        }
        }
        x=x+1;
        goto loop;
    }
    printf("%d",a);
}