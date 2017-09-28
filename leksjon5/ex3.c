#include <stdio.h>
#include <string.h>

int main(int iArg, char *apszArgV[])
{
	if(iArg < 2 || iArg > 2)
	{
		printf("\nCorrect usage: ./ex2 <word>\n");
	}
	
	char *word = apszArgV[1];
	
	int x = strlen(word);
	
	for(int i = 0; i < x; i++)
	{	
		switch(word[i])
		{
			case 'a': printf("a\n");
			break;
			case 'e': printf("e\n");
			break;
			case 'i': printf("i\n");
			break;
			case 'o': printf("o\n");
			break;
			case 'u': printf("u\n");
			break;
		}
		
	}
	
	return 0;
	
}
