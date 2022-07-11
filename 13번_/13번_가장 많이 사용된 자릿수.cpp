#pragma warning (disable : 4996)
#include <iostream>

int strLen(const char* pCh)
{
	int count = 0;

	while (*pCh++ != '\0')
	{
		++count;
	}
	return count;
}

int main()
{
	int count[10] = {};
	char input[101] = {};

	scanf("%s", input);

	int len = strLen(input);
	for (int i = 0; i < len; ++i)
	{
		count[input[i] - 48]++;
	}

	int max = 0;
	for (int i = 0; i < 9; ++i)
	{
		if (count[max] < count[i + 1] || count[max] == count[i + 1])
		{
			max = i + 1;
		}
	}

	printf("%d", max);

	return 0;
}