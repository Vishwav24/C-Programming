#include<stdio.h>
int main()
{
    int a,b,c,d=0,e;
    printf("Enter a two digit number : ");
    scanf("%d",&a);
    e=a;
    c=a%10;
    d=d+c;
    a=a/10;
    d=d+a;
    b=e-(5*((d%2)));
    printf("%d",b);
}