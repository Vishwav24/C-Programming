#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a three digit Number : ");
    scanf("%d",&x);
    y=x%10;
    printf("%d",y);
}