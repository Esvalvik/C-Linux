#include <sys/stat.h>
#include <stdio.h>

void main (void)
{
  struct stat sBuffer;
  int iRc;

  iRc = stat("adventures.txt", &sBuffer);
  if (iRc == 0) {
    printf ("Size of file: %ld\n", sBuffer.st_size);
  }
}
