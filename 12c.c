#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5];
	for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		scanf("%i", &arr[i]);
	}
	int min = arr[0];
	
	for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}

	}
	printf("%i", min);
	
	return 0;

}


