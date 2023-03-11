#include <stdio.h>
#include <stdlib.h>

int main()
{   
   int arr1[5] = {1, 2, 3, 4, 5};
   int arr2[5] = {6, 7, 8, 9, 10};
   int arr[sizeof(arr1) / sizeof(int) + sizeof(arr2) / sizeof(int)];

   for(int i = 0; i < sizeof(arr1) / sizeof(int); i++)
   {    
        arr[i] = arr1[i];
        printf("%i", arr[i]);


   }

    for(int i = 0;  i < sizeof(arr) / sizeof(int) - sizeof(arr1) / sizeof(int); i++)
    {
        arr[i] = arr2[i];
        printf("%i", arr[i]);

    }
}
