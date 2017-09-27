#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


#define FALSE 0
#define TRUE !FALSE
#define KEN "\x1B[0m"
#define KTO "\x1B[34m"
#define KTRE "\x1B[31m"

void swap(char* a[], char* b[]);

int swapped = TRUE;


int main(int argc, char* argv[]) {
	
	int size = argc - 1;
	char* a [size];
	int x;
	int count = 1;
	
	if(argc < 2) {
		printf("Correct usage: ./ex4 Hello Word Hei Verden\n");
		return 1;
	}
	
	for(int i = 0; i < size; i++){
		a[i] = (argv[i+1]);
	}
	
	/**printf("Array: \n");
	for(int i = 0; i < size; i++){
		printf("%s\n", a[i]);
	}*/
	
	while (swapped) {
		int z = size;
		swapped = FALSE;
		for(x = 1; x < z; x++) {
			if(strcmp(a[x-1], a[x])>0) {
				swap(&a[x-1], &a[x]);
				printf("\n%d\n", count); 
				for(int i = 0; i < size; i++){
					if(i == x || i == x - 1) { 
					printf("%s%s\n%s", KTRE, a[i], KEN);
					}
					else {
					printf("%s\n", a[i]);
					}	
				}
				//sleep(1);
				count++;
				
			}	
		}
		z = x - 1;
	}
	
	printf("\nSorted array: \n");
	for(int i = 0; i < size; i++){
		printf("%s\n", a[i]);
	}
	
	
	return 0;	
	
}

void swap(char* a[], char* b[]) {
	swapped = TRUE;
	char* swap = *a;
	*a = *b;
	*b = swap;
	
}

