#include "md5.h"
#include <string.h>
#include <stdio.h>


MD5_CTX ctx;

unsigned char add(FILE *f, unsigned char* hash);
void printHash(FILE *f, unsigned char* hash);

int main(int iArgC, char* argV[])
{
	if(iArgC < 2)
	{
		printf("Missing arguments\n");
		return 1;
	}
	unsigned char hash[16];
	char* fileName;
	fileName = argV[2];
	FILE *f;
	f = fopen(fileName, "rb+");
	//unsigned char hash[16];
	add(f, hash);
	printHash(f, hash);
}

unsigned char add(FILE *f, unsigned char* hash)
{
	char* str;
	char c;
	int length = 0;
	if(f != NULL)
	{
		md5_init(&ctx);
		while(fread(&c, 1, 1, f) > 0)
		{	
			md5_update(&ctx, &c, 1);
		}
		md5_final(&ctx, hash);
	}
	return hash;
}

void test()
{

}

void strip()
{
	
}

void printHash(FILE *f, unsigned char* hash)
{	
	//fseek(f, , SEEK_END);
	for(int i = 0; i < 16; i++)
	{
		printf("%02x", hash[i]);
		fwrite(hash[i], 1, 1, f)
	}
	printf("\n");
}


