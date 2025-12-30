#include<stdio.h>
int main()
{
    int x,y=0;
    for(x=10;x<100;x++)
    {
        if(x%10==5)
        {
            y=y+x;
        }
    }
    printf("%d",y);
}