#include<stdio.h>
int find_2digit_odd_sum7(int *p );
int main()
{
    int a,b;
    int *p;
    p=&a;
    for(a=11;a<=99;a++)
    {
       b=find_2digit_odd_sum7(&a);
       if(b!=0)
       {
       printf("%d ",b);
       }
    }
}
int find_2digit_odd_sum7(int *p)
{
    int z,x;
    z=(*p)%10;
    x=(*p)/10;
    if((*p)%2!=0&&(z+x)==7)
        {
            return *p;
        }
        else{
            return 0;
        }
}