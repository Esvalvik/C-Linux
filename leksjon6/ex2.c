#include <stdio.h>

int vowel(const int c);
int consVowel(char* fileName);
int doubleLetter(char* fileName, char cCheck);

int main(int iArgc, char* argV[])
{	
	if(iArgc < 2)
	{
		printf("Missing arguments\n");
		return 1;
	}
	char* fileName;
	fileName = argV[1];
	char c = tolower(argV[2][0]);
	
	int vowelCount = consVowel(fileName);
	int doubleLetterCount = doubleLetter(fileName, c);
	
	
	printf("Double vowels: %d\n", vowelCount); 
	printf("Double letters of the letter '%c': %d\n", c, doubleLetterCount);
	
}

int consVowel(char* fileName)
{	
	FILE *f;
	f = fopen(fileName, "r");
	int lastVowel = 0;
	int count = 0;
	char c;
	if(f != NULL)
	{	
		while(!feof(f))
		{	
			c = getc(f);
			if(lastVowel && vowel(c))
			{	
					lastVowel = 1;
					count++;
			}
			else if(vowel(c) && !lastVowel)
			{
				lastVowel = 1;
			}
			else
			{
				lastVowel = 0;
			}
			//printf("%d\n", vowelCount);		
		}
	}
	return count;
}

int vowel(const int c)
{

	switch(c)
	{
		case 'a': return 1;
		break;
		case 'A': return 1;
		break;
		case 'e': return 1;
		break;
		case 'E': return 1;
		break;
		case 'i': return 1;
		break;
		case 'I': return 1;
		break;
		case 'o': return 1;
		break;
		case 'O': return 1;
		break;
		case 'u': return 1;
		break;
		case 'U': return 1;
		break;
		default: return 0;
		break;
	}
}

int doubleLetter(char* fileName, char cCheck)
{
	FILE *f;
	f = fopen(fileName, "r");
	int foundLetter = 0;
	char c;
	int count = 0;
	if(f != NULL)
	{
		while(!feof(f))
		{
			c = tolower(getc(f));
			//printf("Her\n");
			if(c == cCheck && !foundLetter)
			{
				foundLetter = 1;
			}
			else if(c == cCheck && foundLetter)
			{
				foundLetter = 1;
				count++;
			}
			else
			{
				foundLetter = 0;
			}
		}
	}
	return count;
}

/**
int spacedLetters(char* fileName, int m, int n)
{
	FILE *f;
	f = fopen(fileName, "r");
	int foundLetter = 0;
	char c;
	int count = 0;
	int ahead = 0;
	if(f != NULL)
	{
		while(!feof(f))
		{
			c = getc(f);
			for(int i = 1; i < n + 1; i++)
			{
				if(i > n)
				{
					if(c == getc(f);
				}
			}
			
		}
	}
	return count;
}*/
