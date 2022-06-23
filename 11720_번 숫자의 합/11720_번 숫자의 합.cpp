#pragma warning (disable : 4996)
#include <iostream>

int main()
{
	int count;
	scanf("%d", &count);

	char* num = new char[count];
	scanf("%s", num);

	int sum = 0;
	for (int i = 0; i < count; ++i)
	{
		sum += num[i] - 48;
	}

	printf("%d", sum);
	return 0;
}