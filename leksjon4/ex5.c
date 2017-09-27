#include <stdio.h>

int main(int argc, char* argv[]) {
	
	int size = argc - 1;
	char a[size];

	printf("Number of srings: %d\n", size);
	
	for(int i = 1; i <= size; i++) {
		printf("%d: %s\n",i, argv[i]);
	}
	return 0;
}
