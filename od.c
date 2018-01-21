#include <stdio.h>
int main()
{
    int r,m =20,n=40;
    printf("Print Odd Numbers in a given range m to n:\n");
    for (r = m; r <= n; r++)
        {
               if (r % 2 == 1)
                  printf ("%d ", r);
         }
                return 0;
}
