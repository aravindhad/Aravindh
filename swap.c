#include <stdio.h>
int main()
{
      double f, s, t;
      printf("Enter first number: ");
      scanf("%lf", &f);
      printf("Enter second number: ");
      scanf("%lf",&s);
      t = f;
      f = s;
      s = t;
      printf("\nAfter swapping, firstNumber = %.2lf\n", f);
      printf("After swapping, secondNumber = %.2lf", s);
      return 0;
}
