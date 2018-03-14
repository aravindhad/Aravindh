int main() 
{
int n[10],i,j,maximum;
printf("\n enter 10 numbers");
for(i=0;i<10;i++)
{
	scanf("%d",&n[i]);
}
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
	if(n[j]>n[i])
		maximum=n[j];
}
}
printf("\n the maximum value is %d ", maximum);
	return 0;
}
