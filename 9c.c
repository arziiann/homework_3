#include <stdlib.h>
#include <stdio.h>

int main()
{
	double x = 0;
	scanf("%lf", &x);
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
		else if( (1-i) * i == x )
		{
			printf("%i", i);
		}

	}

}
