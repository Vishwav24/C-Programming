#include<stdio.h>
int main()
{
    int x=6,y=0;
loop:    if(x>=1)
    {
        y=y+x;
        x=x-1;
        goto loop;
    }
    printf("%d",y);
}