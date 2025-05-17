# include <stdio.h>
#include <string.h>
int main()
{
    char name [50];
    int age;
    float salary;

    printf ("Enter Employee name:\n");
    scanf ("%s", name);

    printf ("Enter Employee age:\n");
    scanf ("%d", &age);
 
    printf ("Enter Employee salary:\n");
    scanf ("%f", &salary);

    return 0;
}