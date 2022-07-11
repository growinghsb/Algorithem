#pragma warning(disable : 4996)
#include <iostream>

int len(const char* pCh)
{
	int count = 0;
	while (*pCh++ != '\0')
	{
		++count;
	}
	return count;
}

int reverse(int x)
{
	char buf[7];
	itoa(x, buf, 10);

	int length = len(buf);

	char* start = buf;
	char* end = buf + length - 1;

	while (start < end)
	{
		char tmp = *start;
		*start++ = *end;
		*end-- = tmp;
	}

	return atoi(buf);
}

bool isPrime(int x)
{
	for (int i = 2; i < x; ++i)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int count;
	scanf("%d", &count);
	getchar();

	int* input = new int[count];
	for (int i = 0; i < count; ++i) 
	{
		scanf("%d", input + i);
		getchar();
	}

	for (int i = 0; i < count; ++i)
	{
		int reverseValue = reverse(*(input + i));

		if (isPrime(reverseValue))
		{
			printf("%d ", reverseValue);
		}
	}

	delete[] input;
	return 0;
}