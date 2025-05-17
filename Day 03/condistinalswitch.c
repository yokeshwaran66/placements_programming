#include <stdio.h>
int main (){
    int num;
    scanf("%d",&num);
    switch (num){
        case 1:
            printf("sunday");
            break;
        case 2:
            printf("monday");
            break;
        case 3:
            printf("tues");
            break;
        case 4:
            printf("wed");
            break;
        case 5:
            printf("thu");
            break;
        case 6:
            printf("fri");
            break;
        case 7:
            printf("sat");
            break;
        default:
            printf("invaild");
    
    


    }
    return 0;
}