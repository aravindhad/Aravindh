#include<stdio.h>
void main()
{
int min=30,hour,p;
printf("enter the time in min");

hour=min/60;
p=min%60;
printf("the hour and minutes are %d %d",hour,p);
}
