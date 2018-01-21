#include<stdio.h>

int main()
{
    int m=8,k=9,a[25],i,j,sum=0;
    
    for(i=0;i<=m;i++)
    {
        scanf("%d",&a[i]);
        }
     
        for(j=0;j<k;j++)
        {
            sum=sum+a[j];
        }
        printf("sum :%d",sum);
        return 0;
}
