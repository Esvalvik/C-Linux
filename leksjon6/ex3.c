#include <stdio.h>
#include <string.h>

int main(int iArgc, char* argV[])
{
	if(iArgc < 3)
	{
		printf("Missing arguments");
	}
	char* fileName = argV[1];
	char* word = argV[2];
	int length = strlen(word);
	int iArr [length];
	printf("Length: %d\n", length);
	int i = 0;
	
	FILE *f;
	f = fopen(fileName, "r");
	
	if(f != NULL)
	{	
		int x = 1;
		int found = 0;
		int apart = 0;
		while(!feof(f) && !found)
		{	
			if(word[i] == '\0')
			{
				found = 1;
			}
			else if(getc(f) == word[i] && apart > 9)
			{
				iArr[i] = x;
				i++;
				apart = 0;
			}
			else
			{
				apart++;
			}
			x++;	
		}
		if(length > i)
		{
			printf("\nError: did not find all letters in word\n");
			return 1;
		}
	}

	for(int j = 0; j < length; j++)
	{
		printf("%d\t", iArr[j]);
	}
	printf("\n");
	
}
