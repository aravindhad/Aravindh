#include<stdio.h>

int main()
{
    int n,k,a[25],i,j,sum=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<=n;i++)
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
