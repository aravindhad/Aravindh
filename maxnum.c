#include <stdio.h>
  int main() 
  {
    int a[10];
    int t;
    int greatest;
    printf("Enter ten values:");
    for (t = 0; t < 10; t++)
    {
    scanf("%d", &a[t]);
    }
    greatest = a[0];
    for (t = 0; t < 10; t++) 
    {
   if (a[t] > greatest)
    {
    greatest = a[t];
  }}
    printf(" Greatest of ten numbers is %d", greatest);
    return 0;
  }
