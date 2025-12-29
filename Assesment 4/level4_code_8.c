#include<stdio.h>
int main()
{
    int x=11,y,z;
loop:    if(x<100)
    {
        if(x%2==0)
        {
        y=x%10;
        z=x/10;
        if(y+z==6)
        {
            printf("%d\n",x);
        }
        }
        x=x+1;
        goto loop;
    }
}