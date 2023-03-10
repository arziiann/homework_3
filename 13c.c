#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5];
	int max_index = 0;
	
	for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		scanf("%i", &arr[i]);
	}
	int max = arr[0];
	for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			max_index = i;
		}
	
	}
	printf("%i",max_index );




}
