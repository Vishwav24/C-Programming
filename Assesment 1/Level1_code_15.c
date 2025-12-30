#include<stdio.h>
int main()
{
    int a;
    printf("Enter a two digit number : ");
    scanf("%d",&a);
    a=a/10;
    a=a*10;
    printf("%d",a);
}