#include<stdio.h>

int main()
{
    char username [20]="kamal";
    int password =123456;
    char arr[20];
    int  x;
    scanf("%s",&arr);
    scanf("%d",&x);
    if ((strcmp((username,arr)==0)&&(password==x))){
       printf("login successful");
    }
    else printf("faild");
}