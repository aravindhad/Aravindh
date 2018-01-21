#include <stdio.h>

int main()
{
    int originalNum, num=20, lastDigit, digits, sum;
    printf("Enter any number to check Armstrong number: ");
    sum = 0;
    originalNum = num;
    digits = (int) log10(num) + 1;
    while(num > 0)
    {
        lastDigit = num % 10;
             sum = sum + round(pow(lastDigit, digits));
             num = num / 10;
    }
        if(originalNum == sum)
    {
        printf("%d is ARMSTRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT ARMSTRONG NUMBER", originalNum);
    }
    return 0;
}
