#include<stdio.h>
int main()
{
    int a,b,c=0,d,e;
    printf("Enter a three digit Number : ");
    scanf("%d",&a);
    b=a%10;
    c=c+b;
    a=a/10;
    d=a%10;
    c=c+d;
    a=a/10;
    e=a;
    c=c+e;
    printf("%d",c);
}