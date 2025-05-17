#include <stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    int n=0;

    while (x>0)
    {
        int r=x%10;
        n=n*10+r;
        x=x/10;
        printf("%d\n",n);
    }
    return 0;

}