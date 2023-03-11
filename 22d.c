#include <stdio.h>
#include <stdlib.h>

int main()
{   
    
    char arr[] = "CheeseBurger";

    for(int i = 0; i < sizeof(arr) - 1; i++)
    {
        if(arr[i] == 'a' || arr[i] == 'e'|| arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y' )
        {
            printf("%c", arr[i]);    
        }

    }
}    
