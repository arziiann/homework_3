#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x = 0;
	scanf("%i", &x);
	if(x <= 0)
	{	
		printf("0 chi kareli :) ");
	}
	for(int i = 1; i <= x/2; i++)
	{
		if(i * i == x)
		{
			printf("%i", i);
			
		}
		
        
	}

}
