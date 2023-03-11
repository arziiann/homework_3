#include <stdio.h>
#include <stdlib.h>

int main()
{   
    
    char arr[] = "CheeseBurger";
    char small_char = arr[0];

    for(int i = (sizeof(arr) - 1); i >= 0; i--)
    {
        printf("%c", arr[i]);

    }
}    
