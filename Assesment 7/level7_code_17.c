#include<stdio.h>
int check_prime_and_sum14(int );
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    check_prime_and_sum14(x);
}
int check_prime_and_sum14(int x)
{
    int y=2,z=0,a=0,b;
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
        printf("Prime & ");
    }
    else
    {
        printf("Not Prime & ");
    }
    while(x!=0)
    {
        b=x%10;
        a=a+b;
        x=x/10;
    }
    if(a==14)
    {
        printf("sum of digit is 14");
    }
    else
    {
        printf("sum of digit is not 14");
    }
}