
int main()
{
	int num = 0;

	int buffer[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	char* chPtr0, *chPtr1 = (char*)buffer;

	num = *(chPtr1 + 1);						//Non-Compliant

	char* chStr = ((char *)buffer + 1);				//Non-Compliant

	chStr = (1 + (char *)buffer);					//Non-Compliant

	char *xPtr, *xPtr1, *xPtr2;
	   
	int *nPtr = buffer;

	xPtr = (char*)buffer;

	xPtr1 = xPtr;

	xPtr2 = xPtr1;

	num = *(xPtr2 + 1);					//Non-Compliant

	char ch = *((char*)nPtr + 1);		//Non-Compliant

	int *start = (buffer + 1);				//Compliant

	int *end = ((int *)buffer + 9);			//Compliant

	int mid = (end - start) / 2;			//Compliant

	start = start + 1;						//Compliant

	long int* ptr = ((long int *)nPtr - 1);		//Non-Compliant

	return 0;
}
