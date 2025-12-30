#include<stdio.h>
int main()
{
    int x,y,z,a;
    for(x=11;x<100;x++)
    {
        if(x%2!=0)
        {
                y=x%10;
                a=x/10;
                z=a+y;
                if(z==7)
                {
                    printf("%d\n",x);
                }
        }
    }
}