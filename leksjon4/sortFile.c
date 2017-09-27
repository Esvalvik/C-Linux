#include <stdio.h>
#include <string.h>

#define FALSE 0
#define TRUE !FALSE
#define KRED "\x1B[31m"
#define KWHI "\x1B[0m"

//void copyFile(char *myArray, char *file);
void swap(char* a[], char* b[]);

	int swapped = TRUE;

int main(void) 
{
	int i = 0;
	int nbElement = 1000;
	char line[1000];
	char *str[1000];
	const char s[2] = " ";
	char token;
	FILE *myFile;
	int counter = 0;
	
	
	myFile = fopen("Test.txt", "r");
	if(!myFile) 
	{
		printf("could not open file\n");
	}
	else
	{
		printf("file opened\n");
	
		fgets(line, sizeof line, myFile);
	
		token = strtok(line, s);
	
		for(i = 0; (i < nbElement) && (token !=NULL); i++) 
		{
			//int len = strlen(token);
			//tab[i] = malloc(len);
			//strncpy(tab[i], token, len-1);
			//printf("%s\n",token);
			str[i] = token;
			token = strtok(NULL, s);
			counter++;
			printf("%d\n",counter);
			
		}
	}
	
	
	int size = counter;
	
	char* a[counter];
	for(int q = 0; q < counter;q++) 
	{
		a[q] = str[q];
	}
	for(int x = 0; x < 20;x++)
	{
		printf("%s\n", a[x]);
	}
	int count = 0;
	int x = 0;
	
	while (swapped) 
	{	
		int z = size;
		
		swapped = FALSE;
		for(x = 1; x < z; x++) 
		{
			if(strcmp(a[x-1], a[x])>0) 
			{
				swap(&a[x-1], &a[x]);
				printf("\n%d\n", count); 
				for(int i = 0; i < size; i++)
				{
					if(i == x || i == x - 1) 
					{ 
						printf("%s%s\n%s", KRED, a[i], KWHI);
					}
					else 
					{
						printf("%s\n", a[i]);
					}	
				}
				sleep(1);
				count++;
				
			}	
		}
		z = x - 1;
	}
	
	return 0;
}

void swap(char* a[], char* b[])
{
	swapped = TRUE;
	char* swap = *a;
	*a = *b;
	*b = swap;
	
}


/*
void copyFile(char *myArray, char *file) 
{
	int i = 0;
	int nbElement = 1000;
	char line[1000];
	char *str[1000];
	const char s[2] = " ";
	char *token;
	FILE *myFile;
	int counter = 0;
	
	myFile = fopen(file, "r");
	if(!myFile) 
	{
		printf("could not open file\n");
	}
	else
	{
		printf("file opened\n");
	
		fgets(line, sizeof line, myFile);
	
		token = strtok(line, s);
	
		for(i = 0; (i < nbElement) && (token !=NULL); i++) 
		{
			//int len = strlen(token);
			//tab[i] = malloc(len);
			//strncpy(tab[i], token, len-1);
			//printf("%s\n",token);
			str[i] = token;
			token = strtok(NULL, s);
			counter++;
			
		}
	}
	for(int x = 0; x < 20;x++)
	{
		printf("%s\n", str[x]);
	}
	char* strArray[counter];
	for(int q = 0; q < counter;q++) 
	{
		strArray[q] = str[q];
	}
	
	myArray = strArray;
}*/


