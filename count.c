#include <stdio.h>
int main()
{
    long long s=100;
    int count = 0;

    printf("Enter an integer: ");
    

    while(s != 0)
    {
        s /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
