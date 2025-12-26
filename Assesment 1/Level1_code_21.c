#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a three digit number : ");
    scanf("%d",&a);
    b=a-(5*((a%2)*((a/100)%2)));
    printf("%d",b);
}