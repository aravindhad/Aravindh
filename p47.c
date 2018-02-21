#include<stdio.h>
void main()
{
int t,i,big,small;
scanf("%d",&t);
int a[n];
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
printf("%d",a[i]);
}
big=a[0];
for(i=0;i<t;i++)
{
if(big<a[i])
{
big=a[i];
}
}
printf("\n largest number%d",big);
}
small=a[0];
for(i=0;i<t;i++)
{
if(small>a[i])
{
small=a[i];
}
}
printf("the largest valuve is%d",small);
}
