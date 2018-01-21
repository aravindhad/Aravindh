#include <stdio.h>

int checkPrimeNumber(int n);
int main()
{
    int m1=5, m2=50, i, flag;

    printf("Enter two positive integers: ");
    printf("Prime numbers between %d and %d are: ", m1, m2);

    for(i=m1+1; i<m2; ++i)
    {
        
        flag = checkPrimeNumber(i);
        if(flag == 1)
            printf("%d ",i);
    }
    return 0;
}

int checkPrimeNumber(int n)
{
    int j, flag = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
