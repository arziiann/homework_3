#include <stdio.h>
#include <stdlib.h>

int main()
{   
    
    char arr[] = "CheeseBurger";
    
    for(int i = 0; i < (sizeof(arr) - 1) / 2; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[sizeof(arr) - 1 - i];
        arr[sizeof(arr) - 1 - i] = tmp;

    }
    for(int i = 0; i < sizeof(arr); i++)
    {
        printf("%c", arr[i]);
    }
    
    

}
