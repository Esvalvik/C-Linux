// printfile.c: Lession 5 - examples
//
// cl /Od /Zi printfile.c
// gcc -O2 printfile.c -o printfile
//
// -or- make TARGET=printfile
//
// Example: Finds the size of a file, creates a buffer
//          then reads the file in one chunk.
//
//          For reading a file in chunks, see Md5/print_md5.c
//

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char BYTE;  // Nice to have

int main (int iArgC, char *apszArgV[])
{
   FILE *f = NULL;
   char szLine [160];      // Assume max line length
   int iLine = 0;

   if (iArgC < 2) {
      printf ("Usage: printfile <file name>\n");
      return 1;
   }

   f = fopen (apszArgV[1], "r"); // Text read.
   if (f != NULL) {
      while (!feof(f)) {
         if (fgets (szLine, sizeof(szLine), f)) {
            printf ("%3d: %s", ++iLine, szLine);
         }
      }
      fclose (f);
   }
}


