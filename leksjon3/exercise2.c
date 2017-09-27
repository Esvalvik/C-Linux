#include <stdio.h>

int main (void) {
	
	int a, b, c, d;
	
	a = 5;
	b = a++;
	c = ++b;
	d = b++;
	
	if(a == 6){
	printf("Correct!\n");
	}
	else{
	printf("Wrong!\n");
	}
	if(b == 7){
	printf("Correct!\n");
	}
	else{
	printf("Wrong!\n");
	}
	if(c == 6){
	printf("Correct!\n");
	}
	else{
	printf("Wrong!\n");
	}
	if(d == 6){
	printf("Correct!\n");
	}
	else{
	printf("Wrong!\n");
	}
	
	return 0;
	

}
