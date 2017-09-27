#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE !FALSE

void bubbleSort(int *piArr, int iC);

int main(int iArgC, char *apszArgV[])
{	
	if(iArgC <= 2|| iArgC < 3)
	{
		printf("Correct usage: ./ex1 <number1> <number2>\n");
		return 1;
	}
	
	int r = atoi(apszArgV[1]);
	int c = atoi(apszArgV[2]);
	int iArr[r][c];
	//iArr = malloc(r*c*sizeof(int));
	int iCount = 0;
	srand(time(NULL));
	int iInput;
	int tmp = 0;
	
	for(int i = 0; i < r; i++) 
	{
		for(int k = 0; k < c; k++)
		{
			iArr[i][k] = -1;
		}
	}
	
	
	for(int i = 0; i < r; i++) 
	{
		for(int k = 0; k < c; k++)
		{
			int z = iArr[i][k];
			printf("%d\t", z);
		}
		printf("\n");
	}
	
	while(iCount < (r*c))
	{	
		int rnd;
		//printf("\nrnd: %d\n",rnd);
		int tmp;
		int iCheck = 0;
		while(scanf("%d", &iInput) != 1) 
		{
			printf("\nPlease input a valid input\n");
			scanf("%*s");
		}
		int found = 0;
		while(!found)
		{	
			rnd = rand()%(r);
			for(int i = 0; i < c; i++)
			{	
				
				if(iArr[rnd][i]==-1)
				{	
					iArr[rnd][i] = iInput;
					found = 1;
					break;
					//printf("\nHer\n");
				}
			}
		}
		iCount++;
	}
	
	printf("\n");
	for(int i = 0; i < r; i++) 
	{
		for(int k = 0; k < c; k++)
		{
			int z = iArr[i][k];
			printf("%d\t", z);
		}
		printf("\n");
	}
	
	for(int i = 0; i < r; i++)
	{
		bubbleSort(iArr[i], c);
	}
	
	
	//printf("%d", iArr[0][0]);
	printf("\n");
	for(int i = 0; i < r; i++) 
	{
		for(int k = 0; k < c; k++)
		{
			int z = iArr[i][k];
			printf("%d\t", z);
		}
		printf("\n");
	}
	return 0;
}


void bubbleSort(int *piArr, int iC)
{
	int swapped = TRUE;
	
	while(swapped)
	{
		swapped = FALSE;
		
		for(int i = 1; i < iC; i++) 
		{
			if(piArr[i-1] > piArr[i])
			{
				int tmp = piArr[i-1];
				piArr[i-1] = piArr[i];
				piArr[i] = tmp;
				swapped = TRUE;
			}
		}
	}
}




