#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    printf("Enter a two digit number : ");
    scanf("%d",&a);
    b=a%10;
    c=(c*10)+b;
    a=a/10;
    d=a;
    c=(c*10)+d;
    printf("%d",c);
}