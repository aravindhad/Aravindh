#include<stdio.h>
int main()
{
	int i,j,k,l,n,avg;
	printf("Enter the number\n");
	scanf("%d\t%d\t%d\t%d",&i,&j,&k,&l);
	n=i+j+k+l;
	avg=n/4;
	printf("the avg is %d",avg);
	return 0;
}
