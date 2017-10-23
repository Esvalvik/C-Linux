#include "bubblesort.h"

int main(void)
{
	int iArray[10];
	int length = sizeof(iArray)/sizeof(int);
	for(int i = 0; i < length; i++)
	{
		iArray[i] = 10 - (1*i);
	}
	
	bubbleSort(iArray, length);
	printArray(iArray, length);
}
