#include <stdio.h>
#include <stdlib.h>

int main()
{   
    
    char arr[] = "CheeseBurger";
    char small_char = arr[0];

    for(int i = 0; i < sizeof(arr) - 1; i++)
    {
        if(arr[i] > small_char)
        {
            small_char = arr[i];
        }

    }
    printf("%i", small_char);
}
