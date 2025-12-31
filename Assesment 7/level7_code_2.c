#include<stdio.h>
void disp_descend(int);
int main()
{
    int x=5;
    disp_descend(x);
}
void disp_descend(int x)
{
    while(x>=1)
    {
        printf("%d",x);
        x--;
    }
}
