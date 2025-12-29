#include<stdio.h>
int main()
{
    int x=11;
loop:    if(x<=20)
    {
        if(x%2!=0)
        {
        printf("%d\n",x);
        }
        x=x+1;
        goto loop;
    }
}