#include<stdio.h>
int main()
{
    int i,j;
    int arr[i][j],k,l;
    printf("enter no. of rows :");
    scanf("%d",&i);
    printf("enter no. of coloums :");
    scanf("%d",&j);
    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            printf("enter element in position %d %d is :",k,l);
            scanf("%d",&arr[l][k]);
        }
    }

     for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            printf("%d",arr[l][k]);
        }
        printf("\n");
    }

return 0;
}