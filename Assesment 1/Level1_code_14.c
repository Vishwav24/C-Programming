#include<stdio.h>
int main()
{
    int a,b,c=0,d,e;
    printf("Enter a four digit number : ");
    scanf("%d",&a);
    b=a%10;
    c=(c*10)+b;
    a=a/10;
    d=a%10;
    c=(c*10)+d;
    a=a/10;
    e=(a*100)+c;
    printf("%d",e);
}