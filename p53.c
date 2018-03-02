#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
 int num = 0, dig = 0, sum = 0;
 clrscr();
 printf("Enter any number\n ");
 scanf("%d", &num);
 while (num != 0)
 {
  dig = num % 10;
  sum = sum + dig;
  num= num/ 10;
 }
 printf ("Sum of individual digits of a given number is %d", sum);
 getch();
}
