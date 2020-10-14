#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int i;
float array[10] = { 0 };
float sum = 0;

int main()

{
	printf("Number 0: %.1f\n", array[0]);
	for (i = 1; i<=9 ; i++) 
		{		
			printf("Enter number %d: ", i);
			scanf_s("%f", &array[i]);
		}
	
	for (i = 0; i <= 9; i++) 
		{
			sum = sum + fabsf(array[i]);
		}
	printf("\nSize = %.1f\n", sum);
	
	return 0;
}