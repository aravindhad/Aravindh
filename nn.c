#include <stdio.h>

int main()
{
    int arr[MAX_SIZE]; 
    int i, e=5;
    printf("Enter size of array: ");
    printf("Enter %d elements in the array : ", e);
    for(i=0; i<e; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: ");
    for(i=0; i<e; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}
