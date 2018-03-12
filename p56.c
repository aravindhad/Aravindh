#include <stdio.h>
#include<string.h>
int main() 
{
	char b[100];
	int alp=0,num=0;
	scanf("%s",b);
	int i,m;
	m=strlen(b);
	for(i=0;i<m;i++)
	{
		if(('b'<=b[i] && b[i]<='z') || ('B'<=b[i] && b[i]<='Z'))
		{
			alp=1;
		}
		if('0'<=b[i] && b[i]<='9')
		{
			num=1;
		}
	}
	if(num==1 && alp==1)
	{
		printf("yes");
	}
	else
		printf("no");
}
