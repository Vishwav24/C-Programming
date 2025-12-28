#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a two digit number");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    z=(x>y);
    printf("%d",z);
}