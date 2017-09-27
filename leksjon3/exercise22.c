
#include <stdio.h>

int main (void) {
	
	int x, y, z, w;
	
	x = 10;
	y = 9;
	z = 8;
	w = 7;
	
	
	if((x==y++) && (z==++x)){
        w = 100;
        printf("This is obviously true");
		}
	z = ++w+y++;
	
	//printf("x = %d\n y = %d\n z = %d\n w = %d\n", x, y, z, w); 
	
	if(x == 10){
	printf("Correct!\n");
	}
	else{
	printf("Wrong!\n");
	}
	if(y == 11){
	printf("Correct!\n");
	}
	else{
	printf("Wrong!\n");
	}
	if(z == 18){
	printf("Correct!\n");
	}
	else{
	printf("Wrong!\n");
	}
	if(w == 8){
	printf("Correct!\n");
	}
	else{
	printf("Wrong!\n");
	}
	
	return 0;
	

}
