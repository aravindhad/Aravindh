#include <stdio.h>
int main()
{
    int n=10, k=12;

    long long result = 1;

    printf("Enter a base number: ");
   
    printf("Enter an exponent: ");

    while (k != 0)
    {
        result *= n;
        --k;
    }

    printf("Answer = %lld", result);

    return 0;
} 
