#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a three digit number : ");
    scanf("%d",&a);
    a=a/10;
    b=(a*10)+2;
    printf("%d",b);
}