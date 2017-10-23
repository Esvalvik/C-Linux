#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

void bubbleSort(int iArray[], int length);
void printArray(int iArray[], int length);
void swap(int* a, int* b);

void bubbleSort(int iArray[], int length)
{
	if(iArray != NULL)
	{
		int size = length;
		int swapped = TRUE;
		while(swapped)
		{
			swapped = FALSE;
			for(int i = 1; i < size; i++)
			{
				if(iArray[i-1] > iArray[i])
				{
				 swap(&iArray[i-1], &iArray[i]);
				 swapped = TRUE;
				 //printf("Swapped\n");
				}
			}
			size--;
		}
	}
}

void printArray(int iArray[], int length)
{
	for(int i = 0; i < length; i++)
	{
		printf("%d\t", iArray[i]);
	}
	printf("\n");
}

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
