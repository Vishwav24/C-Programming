#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a three digit Number : ");
    scanf("%d",&x);
    y=x/10;
    z=y%10;
    printf("%d",z);
}