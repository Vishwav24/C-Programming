#include<stdio.h>
int check_first_2digits_prime(int, int );
int main()
{
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%100;
    check_first_2digits_prime(x,y);
}
int check_first_2digits_prime(int x,int h)
{
    int z=0;
        while(h!=x)
    {
        if(x%h==0)
        {
            z=1;
            break;
        }
        h++;
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