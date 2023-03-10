#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5];
	int min_index = 0;
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
			min_index = i;
		}

	}
	printf("%i", min_index);










}
