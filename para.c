#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int i,a;
 char s[200];
 clrscr();
 printf("enter the string");
 scanf("%s",&s);
 for(i=0;s[i]!='\0';i++)
 {
    if(s[i]=' ')
    a++;
 }
 printf("enter the sentance %d",a+1);
 getch();
}
