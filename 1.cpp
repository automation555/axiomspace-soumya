#include <cstdio>
#include <limits>
#include <cstdint>
#include <cinttypes>
 
void foo()
{
	
	char buffer[50];
    int a = 10, b = 20, c;
    c = a + b;
	   sprintf(buffer, "Sum of %d and %d is %d", a, b);
    sprintf(buffer, "Sum of %d and %d is %d", a, b, c);
	
	    sprintf(buffer, "Sum of %d and %d is %d", a, b, c,d);
 
    // The string "sum of 10 and 20 is 30" is stored
    // into buffer instead of printing on stdout
    printf("%s", buffer);
	printf("Just a simple string");
	printf("hello, he,m,m,l,o.\n %%%%%%%%%%%%%%%%");
    std::printf("Strings:\n");
 
    const char* s = "Hello";
    std::printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\n",
        s, s, 10, s, 4, s, 10, 4, s);
 
    std::printf("Characters:\t%c %%\n", 65);
 
    std::printf("Integers\n");
    std::printf("Decimal:\t%i %d %.6i %i %.0i %+i %i\n", 1, 2, 3, 0, 0, 4, -4);
    std::printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6, 7);
    std::printf("Octal:\t%o %#o %#o\n", 10, 10, 4);
 
    std::printf("Floating point\n");
    std::printf("Rounding:\t%f %.0f %.32f\n", 1.5, 1.5, 1.3);
    std::printf("Padding:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
    std::printf("Scientific:\t%E %e\n", 1.5, 1.5);
    std::printf("Hexadecimal:\t%a %A\n", 1.5, 1.5);
    std::printf("Special values:\t0/0=%g 1/0=%g\n", 0.0/0.0, 1.0/0.0);
 
    std::printf("Variable width control:\n");
    std::printf("right-justified variable width: '%*c'\n", 5, 'x', 'y');
    int r = std::printf("left-justified variable width : '%*c'\n", -5, 'x');
    std::printf("(the last printf printed %d characters)\n", r);
	
	//printf("string: '%.*s%s\n",((n > 30) ? 28 : (int)n), s, ((n > 30) ? ".." : "'"));
 
    // fixed-width types
    std::uint32_t val = std::numeric_limits<std::uint32_t>::max();
    std::printf("Largest 32-bit value is %" PRIu32 " or %#" PRIx32 "\n", val, val);
}
