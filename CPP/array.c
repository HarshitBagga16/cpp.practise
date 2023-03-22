#include<stdio.h>
int main()
{
    int a[34];
    a[0]=34;
    printf("%d\n",a[0]);
    a[0]=333;
    printf("%d\n",a[0]);
    printf("\n");
    printf("%d\n",a[2]);     //garbage value
return 0;
}