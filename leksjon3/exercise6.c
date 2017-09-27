#include <stdio.h>
#include <stdlib.h>
//#include <sys/time.h>


int main(int argc, char* argv[]) {
	
	int x;
	
	//unsigned long timeStart, timeEnd;
	x = atoi(argv[1]);
	int a [x];
    //timeStart = GetTime();
    //scanf("%d", &x);
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i <= x; i++){
   		a[i] = a[i-1] + a[i-2];
    }
    //timeEnd = GetTime();
    printf("The number is %d.\n", a[x]);
    //printf("The elapsed time is %lu ms", (timeEnd - timeStart)/1000);
    return 0;   
    }


