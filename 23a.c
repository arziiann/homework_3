#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {6, 7, 8, 9, 10};
    int arr[sizeof(arr1) / sizeof(int) + sizeof(arr2) / sizeof(int)];
    int size = sizeof(arr) / sizeof(int);

    int counter = 0;
    for(int i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
        ++counter;
    }
    for(int i = 0; i < size; i++)
    {
        arr[counter] = arr2[i];
        ++counter;
        printf("%i", arr[i]);
    }



    return 0;
}
