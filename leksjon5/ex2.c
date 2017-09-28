#include <stdio.h>

int main(int iArg, char *apszArgV[])
{
	if(iArg < 2 || iArg > 2)
	{
		printf("\nCorrect usage: ./ex2 <word>\n");
	}
	
	char *word = apszArgV[1];
	
	int found = 0;
	int length = 0;
	while(!found)
	{
		if(word[length] == '\0')
		{
			found = 1;
		}
		else
		{
			length++;
		}
	}
	
	printf("\nLength of the string is %d\n", length);
	
	return 0;
}
