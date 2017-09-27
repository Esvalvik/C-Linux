#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int x;
	if(argc>1) {
		x = atoi(argv[1]);
	
	}
	
	if(x == 0) {
		printf("Please provide a non-zero integer as argument!\n");
		return 0;
	}
	if((x%2)==0){
		printf("Number %d read and it's even.\n", x);
	}
	else 
	{
		printf("Number %d read and it's odd.\n", x);
	}
	return 0;
}
