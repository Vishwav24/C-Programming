#include<stdio.h>
int main()
{
    int x,y=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            {
                y=1;
                break;
            }
    }
    if(y==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    
}