#include <stdio.h>
int main()
{
    int a=10;
    int b=20;

    int c;

    c=b;
    b=a;
    a=c;

    printf("\na=%d\nb=%d",a,b);


}