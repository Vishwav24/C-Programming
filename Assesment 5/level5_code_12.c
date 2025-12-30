#include<stdio.h>
int main()
{
    int x,y,z,a=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(y=0;x!=0;y++)
    {
        z=x%10;
        a=a+z;
        x=x/10;
    }
    printf("%d",a);
}