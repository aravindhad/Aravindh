#include <stdio.h>
int main()
{
    int n=8, r = 0, remainder, o;
    printf("Enter an integer: ");
    
    o = n;

    while( n!=0 )
    {
        remainder = n%10;
        r = r*10 + remainder;
        n /= 10;
    }

    if (o == r)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);
    
    return 0;
}
