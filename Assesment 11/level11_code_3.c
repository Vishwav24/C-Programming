#include<stdio.h>
int arrange_ascend(int ,int *z);
int main()
{
    int x=0,y,*z;
    z=&x;
    for(int i=0;i!=5;i++)
    {
       y=arrange_ascend(x,z);
       printf("%d\n",y);
    }
}
int arrange_ascend(int x,int *z)
{
    while(x!=5)
    {
        *z=*z+1;
        return *z;
    }
}