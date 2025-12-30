#include<stdio.h>
int main()
{
    int a,b,c=0,d,e;
    printf("Enter a three digit number : ");
    scanf("%d",&a);
    b=a%10;
    c=(c*10)+b;
    a=a/10;
    d=a%10;
    c=(c*10)+d;
    a=a/10;
    e=a;
    c=(c*10)+e;
    printf("%d",c);
}