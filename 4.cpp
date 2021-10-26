/* sprintf example */
#include <stdio.h>

void hello(int a, int b);

void bar ()
{
  char buffer [50];
  int n, a=5, b=3;
  n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
  printf ("[%s] is a string %d chars long\n",buffer,n);
  hello(a, b);
}

void hello(int a, int b)
{
  char buffer [50];
  int n;
  n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
}


