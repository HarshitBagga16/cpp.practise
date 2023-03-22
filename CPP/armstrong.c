#include<stdio.h>
int main()
{
    int arm=0,i,n,j,a;
    printf("enter the no. :");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        j=n%10;
        arm=arm+(j*j*j);
        n=n/10;
    }
    printf("%d\n",arm);
    if(arm==a)
    {
        printf("armstrong\n");

    }
    else{
        printf("not\n");
    }
return 0;
}