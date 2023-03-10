#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10];
	int max = 0;
	for(int i = 0; i < 10; i++)
	{
		scanf("%i", &arr[i]);
	}
	for(int i = 0; i < 10; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%i", max);






}
