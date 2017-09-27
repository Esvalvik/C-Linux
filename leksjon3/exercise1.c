#include <stdio.h>

int main(void) {
	
	printf("int: %zuB \n", sizeof(int));
	printf("float: %zuB \n", sizeof(float));
	printf("double: %zuB \n", sizeof(double));
	printf("long: %zuB \n", sizeof(long));
	printf("signed: %zuB \n", sizeof(signed));
	printf("unsigned: %zuB \n", sizeof(unsigned));
	printf("int*: %zuB \n", sizeof(int*));
	printf("float*: %zuB \n", sizeof(float*));
	printf("void*: %zuB \n", sizeof(void*));
	printf("int array[20]: %zuB \n", sizeof(int[20]));

	
	return 0;
}
