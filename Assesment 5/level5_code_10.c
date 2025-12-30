#include<stdio.h>
int main()
{
    int x,y=0;
    for(x=10;x<100;x++)
    {
        if(x%2!=0)
        {
        if(x/10==7)
        {
            y=y+x;
        }
        }
    }
    printf("%d",y);
}