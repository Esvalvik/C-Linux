#include <stdio.h>
#include "PrintBin.h"

int main(void)
{
	FILE* f = fopen("pic.tga", "rb");
	
	char c;
	if(f != NULL)
	{
		fread(&c, 1, 1, f);
		printf("ID: %d\n", (int)c);
		PrintBinary((int)c);
		fread(&c, 1, 1, f);
		PrintBinary(iNum);
		fread(&iNum, 1, 1, f);
		PrintBinary(iNum);
		
		
	}
	
}
