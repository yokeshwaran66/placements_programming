#include <stdio.h>
int main(){
    int x=5;
    int y=6;
    int a=((++x)+(y--)+10);
    printf("%d",a);
    return 0;
    
}