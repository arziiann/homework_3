#include <stdlib.h>
#include <stdio.h>

int main()
{
    int arr1[5];
    int arr2[5];
    
    printf("arr1 -> \n");
    for(int i = 0; i < (sizeof(arr1) / sizeof(int)); i++)
    {   
        scanf( " %i", &arr1[i]);
            }
    
    printf("arr2 -> \n");
    for(int i  = 0; i < (sizeof(arr2) / sizeof(int)); i++)
    {   
         scanf(" %i", &arr2[i]);
    }
    

    for(int i = 0; i < sizeof(arr1) / sizeof(int); i++)
    {
       for(int j = 0; j < sizeof(arr2) / sizeof(int); j++)
        {
            if(i == j)
            {
                 printf("product --> %i \n", arr1[i] * arr2[j]);
            }
        }
    }



}
