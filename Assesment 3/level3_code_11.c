#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a two digit number : ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    if(y>=x)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}