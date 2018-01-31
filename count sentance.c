#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, a;
 
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (a = 0;s[a] != '\0';a++)
    {
        if (s[a] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
