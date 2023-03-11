#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *addres_arr;
    addres_arr = arr;

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%i \n", *(addres_arr + i));

    }



}
