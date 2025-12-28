#include<stdio.h>
int main()
{
    int x,y,z,a;
    printf("Enter a four digit number");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    a=x%10;
    z=(a==y);
    printf("%d",z);
}