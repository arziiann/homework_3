#include <stdio.h>
#include <stdlib.h>
/*
i j  i j  i j
0 0  0 1  0 2
1 0  1 1  1 2
2 0  2 1  2 2
*/

int main()
{
int x = 0;
scanf("%i", &x);
for(int i = 0; i <= x; i++)
{
	printf("*\n");

	for(int j = 0; j <= x-1; j++)	
	{
	
		printf("*");
	}


}
}
