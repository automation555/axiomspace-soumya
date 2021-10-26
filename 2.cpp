#include <stdio.h>
#include <stdlib.h>

void fun () {
   FILE * fp;

   fp = fopen ("file.txt", "w+");
   fprintf(fp, "%s %s %s %d", "We", "are", "in", 2021);
   
   fclose(fp);
}