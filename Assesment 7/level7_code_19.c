#include<stdio.h>
int middle_2digits_prime(int,int );
int main()
{
    int x,y=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    middle_2digits_prime(x,y);
}
int middle_2digits_prime(int x,int y)
{
    int z=0;
    x=x/10;
    y=x%100;
    while(y!=x)
    {
        if(x%y==0)
        {
            z=1;
            break;
        }
        y++;
    }
    if(z==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}