/*
*Name - Nikhil Ranjan Nayak
*Regd No - 1641012040
*Desc -	Bubble sort using CLA
*/
#include "stdio.h"
#include "stdlib.h"

void bubble_sort(int[], int);
void swap(int*, int*);

void main(int argc, char *argv[]) 
{
	int int_array[argc], i;
    for(i = 1; i < argc; i++)
		int_array[i - 1] = atoi(argv[i]);
	
	printf("\nOriginal Array : ");
	for(i = 1; i < argc - 1; i++)
		printf("%d ", int_array[i]);
	
	bubble_sort(int_array, argc - 1);
	
	printf("\nSorted Array : ");
	for(i = 0; i < argc - 1; i++)
		printf("%d ", int_array[i]);
		
	printf("\n");
}

void bubble_sort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
