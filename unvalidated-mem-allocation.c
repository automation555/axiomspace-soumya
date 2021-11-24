#include<stdio.h>

char *buffer = NULL;

void allocateBuffer()
{
     unsigned size, size1;
     scanf("%u", &size);
     if(size1<10)
     {
     buffer = malloc(size);	// non-complaint : varibles are different 
     }

}

void allocateBuffer2()
{
     unsigned size2, size3;
     scanf("%u", &size2);
     {
     buffer = malloc(size2);	// non-complaint
     }

}

void allocateBuffer3()
{
     unsigned size4;
     scanf("%u", &size4);
     if(size4 < 10)
     {
     buffer = malloc(size4);	// complaint 
     }

}

void allocateBuffer4()
{
     unsigned size5;
     scanf("%u", &size5);
     if(size5 < 10)
     buffer = malloc(size5);	// complaint 
     

}

void allocateBuffer5()
{
     unsigned size8;
     scanf("%u", &size8);
     if(size8 < 10)
     {
	return;
     }
     buffer = malloc(size8);	// complaint 
     

}

void allocateBuffer6()
{
     unsigned size6;
     scanf("%u", &size6);
     if(size6 < 10)
      {
	int akjsk;
	}
     buffer = malloc(size6);	// NON-complaint :no return statement 
}

void allocateBuffer7()
{
     unsigned size7;
     scanf("%u", &size7);
     if(size7 < 10)
      return;
	
     buffer = malloc(size7);	// complaint 
}
