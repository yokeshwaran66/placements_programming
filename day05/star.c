#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for (int i = x; i>=1; i--){
       for (int j = 1; j<=x-1; j++)
       {
        printf(" ");
        
       }for (int k = 1; k <=i; k++)
       {
        printf(" * ");
       }        printf("\n");

       
       
    }
       
   
    
}


