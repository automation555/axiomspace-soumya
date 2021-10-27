#include <stdio.h>
#include <stdlib.h>


 void foobar(int x)
  {
      int local_array[7];
      local_array[x] = 0;    // x is not bounds-checked
  }
void foobar1(int x)
  {
      int local_array[7];
      // verify the parameter is in range
      if (x >= 0 && x < 7)
      {
          local_array[x] = 0;
      }
  }  

int main() {
      foobar(15);
      foobar1(15);
      return 0;
  }

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
