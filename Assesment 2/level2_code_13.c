#include<stdio.h>
int main()
{
    int x,y,z,a,b,d,e;
    printf("Enter a four digit number");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    z=(b==y);
    d=(a==x);
    e=(z&d);
    printf("%d",e);
}