#include<stdio.h>
int main()
{
    int x,y,z,a;
    for(x=10;x<100;x++)
    {
        if(x%2==0)
        {
                y=x%10;
                a=x/10;
                z=a+y;
                if(z==6)
                {
                    printf("%d\n",x);
                }
        }
    }
}