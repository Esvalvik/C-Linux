#include "md5.h"
#include <string.h>
#include <stdio.h>


MD5_CTX ctx;

void add(FILE* f, unsigned char* hash);
void test(FILE* f, unsigned char* hash);
void eofHash(FILE* f, unsigned char* hash);
void strip(FILE* f);
int hashCmp(unsigned char* a, unsigned char*b);
void printHash(unsigned char* hash);


int main(int iArgC, char* argV[])
{
	if(iArgC < 3)
	{
		printf("Missing parameters\n");
		return 1;
	}
	
	
	unsigned char hash[16];
	char* fileName;
	char* command = argV[1];
	fileName = argV[2];
	FILE* f;
	f = fopen(fileName, "rb+");
	
	if(strcmp(command, "-add") == 0)
	{
		printf("Adding\n");
		add(f, hash);
		fwrite(hash, 16, 1, f);
		printHash(hash);
	}
	else if(strcmp(command, "-test") == 0)
	{
		unsigned char checkHash[16];
		printf("Testing\n");
		test(f, hash);
		eofHash(f, checkHash);
		printHash(hash);
		printHash(checkHash);
		rewind(f);
		
		if(hashCmp(checkHash, hash))
		{
			printf("Hash good\n");
		}
		else
		{
			printf("Hash bad\n");
		}
	}	
	else if(strcmp(command, "-strip") == 0)
	{
		strip(f);
	}
	fclose(f);

	return 0;
}

void add(FILE* f, unsigned char* hash)
{
	rewind(f);
	char c;
	if(f != NULL)
	{
		md5_init(&ctx);
		while(fread(&c, 1, 1, f) > 0)
		{	
			md5_update(&ctx, &c, 1);
		}
		md5_final(&ctx, hash);
	}	
}


void test(FILE* f, unsigned char* hash)
{	
	rewind(f);
	char c;
	if(f != NULL)
	{
		fseek(f, -16, SEEK_END);
		unsigned int fileLength = ftell(f);
		rewind(f);
		md5_init(&ctx);
		while(ftell(f) < fileLength)
		{	
			fread(&c, 1, 1, f);
			md5_update(&ctx, &c, 1);
		}
		md5_final(&ctx, hash);	
	}	
}

void eofHash(FILE* f, unsigned char* hash)
{
	rewind(f);
	if(f != NULL)
	{
		fseek(f, -16, SEEK_END);
		int i = 0;
		while(!feof(f))
		{		
			hash[i] = getc(f);
			i++;
		}
	}
}

void strip(FILE* f)
{
	rewind(f);
	if(f != NULL)
	{
		fseek(f, -16, SEEK_END);
		int fileSize = ftell(f);
		ftruncate(fileno(f), fileSize);
		printf("Stripped file\n");
	}
}


int hashCmp(unsigned char* a, unsigned char* b)
{
	for(int i = 0; i < 16; i++)
	{
		if(!(a[i] == b[i]))
		{
			return 0;
		}
		return 1;
	}
}

void printHash(unsigned char* hash)
{	
	for(int i = 0; i < 16; i++)
	{
		printf("%02x", hash[i]);
	}
	printf("\n");
	
}
