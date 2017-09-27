#define MEMSIZE 10
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void randomFunction(char *in){
	in[5] = 'c';
	printf("fubar %s\n", in);
}

int main(int argc, char *argv[]){ 
	//My first buggy program
	printf("Entering main\n");
	int *array;
    char aC[10];
	char *string = "ksksdkkas";
	strcpy(aC, string);
    int alpha, beta; 
	array = (int*)malloc(MEMSIZE*sizeof(int));
	if(string != NULL)
	 	randomFunction(aC);
	array[5] = array[2]+10;
	alpha = MEMSIZE + 20;
	beta = alpha + MEMSIZE + 30;
 }
