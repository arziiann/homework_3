#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 10;
    int *addres_sum = &sum;

    float sum1 = 11;
    float *addres_sum1 = &sum1;

    char sum2 = 12;
    char *addres_sum2 = &sum2;
    
    printf("%p\n", addres_sum);
    printf("%p\n", addres_sum1);
    printf("%p\n", addres_sum2);
   



}
