#include<stdio.h>
int main()
{
    int x,y=0;
    printf("Enter a number : ");
    scanf("%d",&x);
loop:    if(x!=0)
    {
        x=x/10;
        y=y+1;
        goto loop;
    }
    printf("%d",y);
}