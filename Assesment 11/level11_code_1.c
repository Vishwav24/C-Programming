#include<stdio.h>
int main()
{
    int *a;
    int b;
    scanf("%d",&b);
    printf("%d",b);
    a=&b;
    *a=5;
    printf("\n%d",b);
}