 #include <stdio.h>

void main (void)
{
   long lSize = 0;
   FILE *f;

   f = fopen ("adventures.txt", "r");
   if (f != NULL) {
      if (fseek(f, 0, SEEK_END) == 0) {
         lSize = ftell(f);
         printf ("Size of file: %ld\n", lSize);
         rewind(f);
      }
      fclose (f);
   }
}
