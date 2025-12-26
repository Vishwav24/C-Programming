#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    b=a-(5*((((a/10)%10)%2)));
    printf("%d",b);
}