#include <stdio.h>
#include <stdlib.h>


int main()
{
	int x = 0;
	int count = 1;
	scanf("%i", &x);
	if(x > 0)
	{
		for(int i = 1; i <= x; i++)
		{
		        count = count  * i;
			
		}
		printf("%i", count);	
		
	}
	else
	{	

		printf("noric");
	}

} 
