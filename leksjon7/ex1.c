#include <stdio.h>

void function();

int main(void)
{
	function();
	function();
	function();
	function();
	function();
	function();
	return 0;
}

void function()
{
	static int iTimesCalled;
	iTimesCalled++;
	printf("This method has been called %d times\n", iTimesCalled);
}
