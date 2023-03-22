#include<stdio.h>
int main()
{
    int i,j,k,l;
    int arr[100];
    printf("the size of array is :");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf("he value at %d is: ",i);
        scanf("%d",&arr[i]);
    }
       for(i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
        printf("he value at %d is: %d\n",i,arr[i]);
        }
    }

return 0;
}