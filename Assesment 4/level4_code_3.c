#include<stdio.h>
int main()
{
    int x=1,y=0;
loop:    if(x<=5)
    {
        y=y+x;
        x=x+1;
        goto loop;
    }
    printf("%d",y);
}