#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a two digit number : ");
    scanf("%d",&x);
    y=x%100;
    x=x/100;
    if(y<=x)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}