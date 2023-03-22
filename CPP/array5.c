#include<stdio.h>
int main()
{
    int arr[100],i,j,k,l,n;
    int max=-100,min=+100;
    printf("Size of array is ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("The value of %d is :",i);
        scanf("%d",&arr[i]);
    }
      for(i=0;i<n;i++)
    {
        printf("The value of %d is : %d\n",i,arr[i]);
        
    }
      for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        

    }
    printf("max value is %d\n",max);
    printf("min value is %d",min);
return 0;
}