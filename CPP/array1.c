#include<stdio.h>
int main()
{
    int i,arr[5];   //arr[]={1,2,3,4,5} works same way
    for(i=0;i<=5;i++)
    {
        printf("Enter the value of %d element :",i);
        scanf("%d",&arr[i]);
    }
     for(i=0;i<=4;i++)
    {
        printf("The value of %d element is %d\n",i,arr[i]);
    }
    

return 0;
}