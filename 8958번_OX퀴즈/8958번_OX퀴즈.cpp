#pragma warning (disable : 4996)
#include <iostream>

int strLen(const char* pCh)
{
	int count = 0;
	while (*pCh != '\0')
	{
		++count;
		++pCh;
	}
	return count;
}

int main()
{
	int count;
	scanf("%d", &count);

	char chArr[80] = { '\0', };
	int* result = new int[count];
	for (int i = 0; i < count; ++i)
	{
		scanf("%s", chArr);
		fflush(stdin);

		int len = strLen(chArr);
		int seq = 0, sum = 0;
		for (int i = 0; i < len; ++i)
		{
			if (chArr[i] == 'O')
			{
				++seq;
			}
			else
			{
				seq = 0;
			}
			sum += seq;
		}
		*(result + i) = sum;
	}

	for (int i = 0; i < count; ++i)
	{
		printf("%d\n", *(result + i));
	}

	delete[] result;
	return 0;
}