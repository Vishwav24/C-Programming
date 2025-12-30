#include<stdio.h>
int main()
{
    int x,y=0,z=2,a=0;
    printf("Enter a number : ");
    scanf("%d",&x);
loop:    if(x%z==0)
    {
        y=1;
    }
else{
    a=0;
}  
 if(z<x-1)
    {
     z=z+1;
     goto loop;
    }
    if(a==0)
    {
    if(y==0)
    {
        printf("Prime");
    }  
    else
    {
        printf("Not Prime");
    }
}
}