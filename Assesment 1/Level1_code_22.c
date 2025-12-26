#include <stdio.h>

int main() {
    int a,b,c,d,e;
    scanf("%d", &a);
    c=a/100;        
    d=(a/10)%10;     
    e=a%10;       
    b=c+d+e;
    b=(b/10)+(b%10);     
    b=(b/10)+(b%10);     
    printf("%d\n",b);
}