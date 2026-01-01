#include<stdio.h>
int disp_interchange_first_last_digit(int );
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    disp_interchange_first_last_digit(x);
}
int disp_interchange_first_last_digit(int x)
{
    int y=2,z=0;
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