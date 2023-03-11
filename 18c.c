#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {   
        scanf("%i", &arr[i]);
    }
    
    for(int i = sizeof(arr) / sizeof(int) - 1; i >= 0; i--)
    {
        
        printf("%i", arr[i]);
    }




}
