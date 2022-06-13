#include <stdio.h>

char ch[1000001];

int main()
{
	scanf_s("%[^\n]s", ch, 1000000);

	char* p = ch;
	int count = 0;

	if (*p == ' ')
	{
		++p;
	}

	while (*p != '\0')
	{
		if (*p == ' ')
		{
			++count;
		}
		++p;
	}

	if (*(p - 1) == ' ')
	{
		--count;
	}

	printf("%d", count + 1);

	return 0;
}