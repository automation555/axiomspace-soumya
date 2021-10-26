/* snprintf example */
#include <stdio.h>

void cake ()
{
  char buffer [100];
  int cx;
  unsigned int idxlen = 0;
  char numsep = 'C';	
  cx = snprintf ( buffer, 100, "The half of %d is %d", 60, 60/2 );

  if (cx>=0 && cx<100)      // check returned value

    snprintf ( buffer+cx, 100-cx, ", and the half of that is %d.", 60/2/2 );

  snprintf(buffer,sizeof(buffer),"%%s%%%ud%c ",idxlen,numsep);

  puts (buffer);
}