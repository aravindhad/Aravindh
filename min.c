#include <stdio.h>
 
int main() 
{
    int array[100], minimum, size=18, c=9, location = 1;
 
    printf("Enter the number of elements in array\n");
 
    printf("Enter %d integers\n", size);
 
    for ( c = 0 ; c < size ; c++ )
 
    minimum = array[0];
 
    for ( c = 1 ; c < size ; c++ ) 
    {
        if ( array[c] < minimum ) 
        {
           minimum = array[c];
           location = c+1;
        }
    } 
 
    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
    return 0;
}
