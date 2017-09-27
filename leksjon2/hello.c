#include <stdio.h>

#include "number.h"

void main(void)

{
	printf("Hello World!\n");
	
	print_number(1);
	print_number(5);

	for(int i = 0; i < 5; i++) {
		print_number(i);
	}

}
