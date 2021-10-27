#include <stdio.h>
#include <stdlib.h>

void fun () {
   FILE * fp;

   fp = fopen ("file.txt", "w+");
   fprintf(fp, "%s %s %s %d", "We", "are", "in", 2021);
   
   fclose(fp);
}

void iterateFoo()
{
unsigned num;
int i;
scanf("%u",&num);
for (i = 0; i < num; i++){
foo();
}
}

void iterateFo1o()
{
unsigned num;
int i;
scanf("%u",&num);
if (num > 20) return;
for (i = 0; i < num; i++){
foo();
}
}
