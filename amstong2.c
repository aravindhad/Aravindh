#include <stdio.h>
int main()
{
  int u1=5, u2=70, i, temp, num, rem;
  printf("Enter two numbers(intervals): ");
  printf("Armstrong numbers between %d and %d are: ", u1, u2);
  for(i=u1+1; i<u2; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
