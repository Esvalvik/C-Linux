#include <stdio.h>

int main(void) {

	for(int i = 99; i > 1; i--){
		//int x = i - 1;
		printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down and pass it around, %d bottles of beer on the wall.\n \n", i, i, i - 1);
	}	
	
	printf("1 bottle of beer on the wall, 1 bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.\n\nNo more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n\n");
	
	return 0;
	
}
