#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a four digit number : ");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    z=x%10;
    if(y==z)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}