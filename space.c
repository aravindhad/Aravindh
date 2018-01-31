#include <stdio.h>

int main()
{
  int b, spaces;
  char a[30];
  printf("enter the string");
  scanf("%s", a);
  for(b=0 ; a[0]!="\0" ; b++
    {
      if (a[b]=' ')
        {
          spaces++;
        }
    }
  printf("Number of spaces is %d", spaces);
  printf("Number of words is %d", spaces + 1);
}
