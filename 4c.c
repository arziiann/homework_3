#include <stdio.h>
#include <stdlib.h>

int main()
{ 
     	int count = 0;
	int x = 0;
	scanf("%i", &x);
	while(x != 0)
	{
		count += x % 10;
		x = x / 10;
	}
	
	printf("%i", count);
	return 0;




}                   
