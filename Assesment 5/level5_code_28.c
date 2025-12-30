#include<stdio.h>
int main()
{
    int x,y,a;
    printf("Enter the number 1 : ");
    scanf("%d",&x);
    printf("Enter the number 2 : ");
    scanf("%d",&y);
    if(x>y)
    {
        a=x;
    }
    else
    {
        a=y;
    }
    for(int i=a;i!=0;i++)
    {
        if(i%x==0&&i%y==0)
        {
           printf("%d",i);
           break;
        }
    }
}