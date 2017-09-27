// ex1.c: Lession 5, exercise 0a:
//
// cl /Od /Zi ex0a.c
// gcc -O2 ex0a.c -o ex0a
//
// -or- make TARGET=ex0a
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main (void)
{
  int i;
  int **aiArray;//array of 20 rows and 15 cols
  aiArray = malloc(20*15*sizeof(int));

  aiArray[0][14] = 123;
  i = aiArray[0][14];
  
  printf ("%d\n", i);
  printf ("%d\n", (int)sizeof(aiArray));
  
  aiArray[19][14] = 456;
  i = aiArray[19][14];  
  printf ("%d\n", i);  
  
  aiArray[14][19] = 789;
  i = aiArray[14][19];  
  printf ("%d\n", i);  

  aiArray[299][0] = 111;
  i = aiArray[299][0];  
  printf ("%d\n", i);  

  aiArray[0][299] = 121;
  i = aiArray[0][299];  
  printf ("%d\n", i);  
  
  free (aiArray);
  
}
