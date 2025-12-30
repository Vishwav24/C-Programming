#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(y=0;x!=0;y++)
    {
        x=x/10;
    }
    printf("%d",y);
}