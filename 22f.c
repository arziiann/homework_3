#include <stdio.h>
#include <stdlib.h>

int main()
{   
    
    char arr[] = "CheeseBurger";
    

    for(int i = 0; i < sizeof(arr) - 1; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
        
            printf("%c", arr[i] - 32);
        }
        else
        {
            printf("%c", arr[i]);
        }

    }
}
