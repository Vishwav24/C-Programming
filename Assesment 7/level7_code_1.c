#include<stdio.h>
void disp_assend(int);
int main()
{
    int x=1;
    disp_assend(x);
}
void disp_assend(int x)
{
    while(x<=5)
    {
        printf("%d",x);
        x++;
    }
} 