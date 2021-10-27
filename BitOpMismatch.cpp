
typedef unsigned int u32;
typedef unsigned long long u64;

int main()
{
	u32 mask32 = 0xff;
	u64 mask64 = 0xff;
	
	u32 value32 = 10;
	u64 value64 = 20;
	
	value32 &= mask32;	//Compliant
	
	value64 |= mask64;	//Compliant
	
	value32 &= mask64;	//Compliant
	
	value64 |= mask32;	//Non-Compliant

	value32 = value32 & mask32;	//Compliant
	
	value64 = value64 | mask64;	//Compliant
	
	value32 = value32 & mask64;	//Compliant
	
	value64 = value64 | mask32;	//Non-Compliant
	
	value64 = value64 | (u32) mask64;	//Non-Compliant
	
	value64 = (u64) value32 | mask32;	//Non-Compliant

	value64 = (u64)value32 | (u32)mask64;	//Non-Compliant

	value64 ^= (u32)mask64;	//Non-Compliant

	return 0;
}
