#include <stdio.h>
int main()
{
    int number=33;

    printf("Enter an integer: ");
 
    if(1<=number<=400)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);

    return 0;
}
