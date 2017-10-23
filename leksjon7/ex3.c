#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _LIST {
   struct _LIST *pNext;
   int iSze;
   char cBuf[1];
} LIST;

int main()
{
	
   	LIST* liste = malloc(sizeof(LIST) + (100*(sizeof(long))));
	long testLong[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


	for(int i = 0; i < 10; i++)
	{
		memcpy(&liste->cBuf[1 + ((sizeof(long)*i))] , &testLong[i], sizeof	(long));
	}
	
	for(int i = 0; i < 10; i++)
	{
		long retrieveLong = 0;
		memcpy(&retrieveLong, &liste->cBuf[1 + ((sizeof(long)*i))], sizeof(long));
		printf("%d\n", retrieveLong);
	}
}



