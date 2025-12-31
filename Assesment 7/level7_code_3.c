#include<stdio.h>
void disp_sum(int);
int main()
{
    int x=1;
    disp_sum(x);
}
void disp_sum(int x)
{
    int y=0;
    while(x<=5)
    {
        y=y+x;
        x++;
    }
    printf("%d",y);
}