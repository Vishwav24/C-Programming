#include<stdio.h>
int main()
{
    int x,y,z=0;
    printf("Enter a number : ");
    scanf("%d",&x);
loop:    if(x!=0)
    {
        y=x%10;
        z=(z*10)+y;
        x=x/10;
        goto loop;
    }
    printf("%d",z);
}