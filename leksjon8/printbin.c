#include <stdio.h>
#include <stdarg.h>

void PrintBinary(int iNum)
{
   for (int i = 0; i < 32; i++) {
      printf ("%c", ((iNum & 0x80000000) >> 31) + '0');
      iNum <<= 1;
      if (!((i + 1) % 4)) printf (" ");
   }
   printf ("\n");
}

