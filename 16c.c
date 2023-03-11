#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int sum_arr = 0;

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        scanf("%i", &arr[i]);
    }
     
    
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        sum_arr += arr[i];
    }
    printf("%i", sum_arr);

}
