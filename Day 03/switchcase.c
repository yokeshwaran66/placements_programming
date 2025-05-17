#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d",&num1,num2);
    printf("1=add\n2=sub\n3=muti\n4=div");
    int user;
    scanf("%d",&user);
    switch (user)
    {
    case 1:
        printf("%d",num1+num2);
        break;
    case 2:
        printf("%d",num1-num2);
        break;
    case 3:
        printf("%d",num1*num2);
        break;
    case 4:
        printf("%d",num1/num2);
        break;
    
    default:
        break;
    }

}