#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define FALSE 0
#define TRUE !FALSE

void swap(int* a, int* b);
unsigned long GetTime();

int swapped = TRUE;


int main(int argc, char* argv[]) {
	
	int size = argc - 1;
	int a [size];
	int timeStart, timeEnd, x;
	int z = size;
	
	if(argc < 2) {
		printf("Correct usage: ./ex4 2 57 33 35\n");
		return 1;
	}
	
	for(int i = 0; i < size; i++){
		a[i] = atoi(argv[i+1]);
	}
	
	timeStart = GetTime();
	
	while (swapped) {
		swapped = FALSE;
		for(x = 1; x < z; x++) {
			if(a[x-1] > a[x]) {
				swap(&a[x-1], &a[x]);
			}
		}
		z = x - 1;
	}
	timeEnd = GetTime();
	for(int i = 0; i < size; i++){
		printf("%d\n", a[i]);
	}
	
	printf("Size : %d\nElapsed time: %lu ms\n",size, (timeEnd - timeStart)/1000);
	
	return 0;	
	
}

void swap(int* a, int* b) {
	swapped = TRUE;
	int swap = *a;
	*a = *b;
	*b = swap;
}


unsigned long GetTime() {
  struct timeval tv;
  gettimeofday(&tv,NULL);
  return tv.tv_sec*(unsigned long)1000000+tv.tv_usec;
}
