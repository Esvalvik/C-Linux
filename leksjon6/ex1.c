#include <stdio.h>

int main(void)
{
	FILE *f;
	FILE *doubleFile;
	char str [50];
	double d;
	
	f = fopen("doubles.txt", "r");
	doubleFile = fopen("doubles.bin", "wb+");
	
	if(f != NULL)
	{
		while(fscanf(f, "%s", str)!=EOF)
		{
			//printf("%s\n",str);
			sscanf(str, "%lf", &d);
			fwrite(&d, sizeof(d), 1, doubleFile);	
		}
	}
	
	rewind(doubleFile);

	while(!feof(doubleFile))
	{
		fread(&d, sizeof(d), 1, doubleFile);
		printf("BINARY : %f\n", d);
	}
	
	/*while(fscanf(doubleFile, "%s", str)!=EOF)
	{	
		snprintf(str, 50, "%f", d);
		printf("%s\n", str);
	}*/


	return 0;
}
