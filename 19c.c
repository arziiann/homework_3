#include <stdio.h>
#include <stdlib.h>

int main()
{
    int avg = 0;
    int sum = 0;
    int arr[5];

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        scanf("%i", &arr[i]);

    }

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        sum += arr[i];


    }
    avg = sum / (sizeof(arr) / sizeof(int));
    printf("%i", avg);



}
