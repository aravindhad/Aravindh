#include <stdio.h>
int main()
{
	int t,ar[100],i=0;
	printf("enter the number\n");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&ar[i]);
		printf("%d",ar[i]);
	}
	return 0;
}
